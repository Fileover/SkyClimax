/* identical to func_002647BC (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_0026CA60(void) { stub = 1; }
__attribute__((noinline)) void func_0026CA84(void) { stub = 2; }
extern s32 func_0027CFD4(u32);

s32 func_0026D77C(u32 x) {
    s32 res;
    func_0026CA60();
    res = func_0027CFD4(x);
    func_0026CA84();
    return res;
}
