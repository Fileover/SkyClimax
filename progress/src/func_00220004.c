/* identical to func_0021FFA0 (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_0021FF78(u64 a) { stub = a; }
__attribute__((noinline)) u64 func_0021FEF0(u64 a) { stub = a; return stub; }
__attribute__((noinline)) u32 func_0021FF28(u64 a) { stub = a; return stub; }
__attribute__((noinline)) void func_0021FF50(u64 a) { stub = a; }

u64 func_00220004(u64 a, u32 *out) {
    func_0021FF78(a);
    u64 v = func_0021FEF0(a);
    *out = func_0021FF28(a);
    func_0021FF50(a);
    return v;
}
