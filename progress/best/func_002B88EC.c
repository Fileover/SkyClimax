typedef struct {
    u32 field_0;
    s32 count;
} Something;

volatile int stub;
__attribute__((noinline)) u32 func_002B85C8(void) {
    stub = 1;
    return 0;
}

extern Something *func_002FE58C(void);
extern void func_002A7CAC(s32);
extern void func_002A7C30(s32);

void func_002B88EC(u32 *ptr) {
    Something *obj;
    *ptr = func_002B85C8();
    obj = func_002FE58C();
    func_002A7CAC(0);
    if (obj->count != -1) {
        obj->count++;
    }
    func_002A7C30(0);
}
