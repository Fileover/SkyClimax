volatile int stub_var;
__attribute__((noinline)) void func_00284288(void) { stub_var++; }
__attribute__((noinline)) void func_002842B4(u32 a) { stub_var = a; }
__attribute__((noinline)) void func_0028431C(void) { stub_var++; }

void func_00284348(u32 a) {
    func_00284288();
    func_002842B4(a);
    func_0028431C();
}
