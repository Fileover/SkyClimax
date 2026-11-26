volatile int stub;
__attribute__((noinline)) void func_0021FF78(void *a) { stub = (u64)a; }
__attribute__((noinline)) void func_002206A4(void *a, u32 b) { stub = (u64)a + b; }
__attribute__((noinline)) u32 func_0021FF28(void *a) { stub = (u64)a; return stub; }
__attribute__((noinline)) void func_0021FF50(void *a) { stub = (u64)a; }

void func_00220798(void *a, u32 b, u32 *c) {
    func_0021FF78(a);
    func_002206A4(a, b);
    *c = func_0021FF28(a);
    func_0021FF50(a);
}
