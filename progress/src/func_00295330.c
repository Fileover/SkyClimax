/* identical to func_00285438 (matched), with its names changed by decompdecomp */
volatile int stub_var;
__attribute__((noinline)) void func_00294C70(void) { stub_var++; }
__attribute__((noinline)) void func_00295294(void *a, int b) { stub_var = (int)(u64)a + b; }
__attribute__((noinline)) void func_00294C9C(void) { stub_var++; }

void func_00295330(void *a, int b) {
    func_00294C70();
    func_00295294(a, b);
    func_00294C9C();
}
