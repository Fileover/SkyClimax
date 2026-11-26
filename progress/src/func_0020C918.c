/* identical to func_0020C890 (matched), with its names changed by decompdecomp */
volatile int stub;
void func_0020C2D4(void) { stub = 1; }
u32 func_0020C900(u32 a, s32 b, u32 c, s32 d) { stub = a + b + c + d; return stub; }
void func_0020C27C(void) { stub = 2; }

u32 func_0020C918(u64 a, s64 b, u64 c, s64 d) {
    func_0020C2D4();
    u32 ret = func_0020C900((u32)a, (s32)b, (u32)c, (s32)d);
    func_0020C27C();
    return ret;
}
