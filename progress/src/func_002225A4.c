/* identical to func_00220798 (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_0022248C(void *a) { stub = (u64)a; }
__attribute__((noinline)) void func_00222558(void *a, u32 b) { stub = (u64)a + b; }
__attribute__((noinline)) u32 func_00222434(void *a) { stub = (u64)a; return stub; }
__attribute__((noinline)) void func_00222464(void *a) { stub = (u64)a; }

void func_002225A4(void *a, u32 b, u32 *c) {
    func_0022248C(a);
    func_00222558(a, b);
    *c = func_00222434(a);
    func_00222464(a);
}
