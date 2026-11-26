typedef struct {
    u8 pad[0x698];
    u32 arr[33];
    u32 field_71c;
    u32 field_720;
    u32 field_724;
    u32 field_728;
    u32 field_72c;
    u32 field_730;
} Obj;

extern Obj B_005FFB54;

void *func_0003AD9C(void);
void func_00018BC8(void *);
void func_000850C4(u32, s32);
void func_0008F564(void *);
void func_0017FC5C(void);

void func_000374D4(void) {
    int i;
    Obj *obj;
    void *res = func_0003AD9C();
    if (res != NULL) {
        func_00018BC8(res);
    }

    obj = &B_005FFB54;
    for (i = 0; i < 33; i++) {
        func_000850C4(obj->arr[i], 1);
        obj->arr[i] = 0;
    }

    func_0008F564(&obj->field_71c);

    obj->field_71c = 0;
    func_000850C4(obj->field_720, 1);
    obj->field_720 = 0;
    func_000850C4(obj->field_724, 1);
    obj->field_724 = 0;
    func_000850C4(obj->field_728, 1);
    obj->field_728 = 0;
    func_000850C4(obj->field_72c, 1);
    obj->field_72c = 0;
    func_000850C4(obj->field_730, 1);
    obj->field_730 = 0;

    func_0017FC5C();
}
