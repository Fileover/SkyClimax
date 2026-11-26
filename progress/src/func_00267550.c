/* identical to func_00267290 (matched), with its names changed by decompdecomp */
volatile int dd_stub;
__attribute__((noinline)) void func_00264650(void) { dd_stub = 1; }
__attribute__((noinline)) s32 func_00267504(s32 a, s32 b, s32 c, u32 d, u32 e, s32 f) { dd_stub = a; return dd_stub; }
__attribute__((noinline)) void func_00264674(void) { dd_stub = 2; }

s32 func_00267550(s32 a, s32 b, s32 c, u32 d, u32 e, s32 f) {
    s32 ret;
    func_00264650();
    ret = func_00267504(a, b, c, d, e, f);
    func_00264674();
    return ret;
}
