extern void *D_004CD9D8;
extern void *D_00559610[];
extern u8 D_00559650[];
extern const char STR_0046C188[];

typedef struct Vtable {
    void (*unk0)(void);
    void (*callback)(void *self, u64 arg1, u32 arg2, u32 arg3, u32 arg4);
} Vtable;

typedef struct Manager {
    Vtable *vtable;
} Manager;

typedef struct Obj {
    void *vtable;
    u8 pad[0x10c];
    u32 field_110;
} Obj;

void func_002EF0A4(Obj *obj, const char *str);
void func_002EDD68(Obj *obj);

void func_002EF2C8(Obj *obj) {
    u32 handle = obj->field_110;
    obj->vtable = &D_004CD9D8;
    if (__builtin_expect(handle != 0, 1)) {
        Manager *mgr = (Manager *)D_00559610[2];
        mgr->vtable->callback(mgr, (u64)handle, 0x100c010c, 0, 0);
    }
    if (__builtin_expect(D_00559650[0] == 0, 0)) {
        func_002EF0A4(obj, STR_0046C188);
        func_002EDD68(obj);
        return;
    }
    func_002EDD68(obj);
}

volatile int dummy;
void __attribute__((noinline)) func_002EF0A4(Obj *obj, const char *str) {
    dummy = (int)str;
}

void __attribute__((noinline)) func_002EDD68(Obj *obj) {
    dummy = (int)obj;
}
