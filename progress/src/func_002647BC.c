volatile int stub;
__attribute__((noinline)) void func_00264650(void) { stub = 1; }
__attribute__((noinline)) void func_00264674(void) { stub = 2; }
extern s32 func_0026D644(u32);

s32 func_002647BC(u32 x) {
    s32 res;
    func_00264650();
    res = func_0026D644(x);
    func_00264674();
    return res;
}
