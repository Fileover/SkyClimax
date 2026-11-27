/* identical to func_00265E60 (matched), with its names changed by decompdecomp */
void func_00264650(void);
s32 func_00265F20(u32, s32, u32);
void func_00264674(void);

s32 func_0026602C(u64 a, s64 b, u64 c) {
    func_00264650();
    s32 ret = func_00265F20((u32)a, (s32)b, (u32)c);
    func_00264674();
    return ret;
}

volatile int stub;
void func_00264650(void) { stub = 1; }
s32 func_00265F20(u32 a, s32 b, u32 c) { stub = a + b + c; return stub; }
void func_00264674(void) { stub = 2; }
