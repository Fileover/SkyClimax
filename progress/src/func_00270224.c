extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) s32 func_00270178(u32 a, s32 b) {
    stub = (int)a + b;
    return stub;
}

s32 func_00270224(u32 a, s32 b) {
    s32 ret;
    func_0029186C();
    ret = func_00270178(a, b);
    func_0029181C();
    return ret;
}
