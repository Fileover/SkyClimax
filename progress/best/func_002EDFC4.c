extern void *D_004CD9D8;
extern const char D_0046C000[];

struct ManagerVtable {
    int (*alloc)(void *self, u64 size, u32 arg2, u32 arg3, u32 arg4);
};

struct Manager {
    struct ManagerVtable *vtable;
};

struct ManagerHolder {
    u8 pad[8];
    struct Manager *mgr;
};

extern struct ManagerHolder D_00559610;

typedef struct RamCache {
    void *vtable;
    u8 pad_04[0xd4];
    u8 field_d8;
    u8 pad_d9[3];
    u32 field_dc;
    u32 field_e0;
    u8 pad_e4[0x2c];
    u32 field_110;
} RamCache;

void func_002EDE1C(RamCache *obj);
void func_002E9954(const char *fmt, u32 arg1, u32 arg2, u32 arg3);

void func_002EDFC4(RamCache *obj) {
    func_002EDE1C(obj);
    obj->vtable = &D_004CD9D8;
    u32 size = obj->field_e0 * obj->field_dc;
    struct Manager *mgr = D_00559610.mgr;
    int handle = mgr->vtable->alloc(mgr, (u64)size, 0x100c010c, 0, 0);
    obj->field_110 = (u32)handle;
    if (__builtin_expect(!handle, 0)) {
        func_002E9954(D_0046C000, obj->field_e0, obj->field_dc, size);
        obj->field_d8 = 1;
    }
}

void __attribute__((noinline)) func_002EDE1C(RamCache *obj) {
    *(volatile int *)obj = 0;
}
