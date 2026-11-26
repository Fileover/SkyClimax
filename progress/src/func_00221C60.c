/* identical to func_00220798 (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_00220EA0(void *a) { stub = (u64)a; }
__attribute__((noinline)) void func_00221C14(void *a, u32 b) { stub = (u64)a + b; }
__attribute__((noinline)) u32 func_00220C14(void *a) { stub = (u64)a; return stub; }
__attribute__((noinline)) void func_00220E78(void *a) { stub = (u64)a; }

void func_00221C60(void *a, u32 b, u32 *c) {
    func_00220EA0(a);
    func_00221C14(a, b);
    *c = func_00220C14(a);
    func_00220E78(a);
}
