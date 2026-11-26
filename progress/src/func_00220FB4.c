/* identical to func_00220068 (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_00220EA0(u64 a) { stub = a; }
__attribute__((noinline)) u64 func_00220AF4(u64 a) { stub = a; return stub; }
__attribute__((noinline)) u32 func_00220C14(u64 a) { stub = a; return stub; }
__attribute__((noinline)) void func_00220E78(u64 a) { stub = a; }

u32 func_00220FB4(u64 a, u32 *out) {
    func_00220EA0(a);
    u64 v = func_00220AF4(a);
    *out = func_00220C14(a);
    func_00220E78(a);
    return (u32)v;
}
