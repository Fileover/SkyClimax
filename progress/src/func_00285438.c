volatile int stub_var;
__attribute__((noinline)) void func_00284288(void) { stub_var++; }
__attribute__((noinline)) void func_002852F8(void *a, int b) { stub_var = (int)(u64)a + b; }
__attribute__((noinline)) void func_0028431C(void) { stub_var++; }

void func_00285438(void *a, int b) {
    func_00284288();
    func_002852F8(a, b);
    func_0028431C();
}
