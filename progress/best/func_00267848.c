/* identical to func_00267758 (matched), with its names changed by decompdecomp */
volatile int stub;
void func_00264650(void) { stub = 1; }
s32 func_002677C8(s32 a, u32 b, u32 c, u32 d) { stub = a + b + c + d; return stub; }
void func_00264674(void) { stub = 2; }

s32 func_00267848(s64 a, u64 b, u64 c, u64 d) {
    func_00264650();
    s32 ret = func_002677C8((s32)a, (u32)b, (u32)c, (u32)d);
    func_00264674();
    return ret;
}
