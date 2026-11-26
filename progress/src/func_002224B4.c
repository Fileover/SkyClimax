/* identical to func_00220068 (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_0022248C(u64 a) { stub = a; }
__attribute__((noinline)) u64 func_00222428(u64 a) { stub = a; return stub; }
__attribute__((noinline)) u32 func_00222434(u64 a) { stub = a; return stub; }
__attribute__((noinline)) void func_00222464(u64 a) { stub = a; }

u32 func_002224B4(u64 a, u32 *out) {
    func_0022248C(a);
    u64 v = func_00222428(a);
    *out = func_00222434(a);
    func_00222464(a);
    return (u32)v;
}
