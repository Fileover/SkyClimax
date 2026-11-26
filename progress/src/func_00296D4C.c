/* identical to func_00284348 (matched), with its names changed by decompdecomp */
volatile int stub_var;
__attribute__((noinline)) void func_00296714(void) { stub_var++; }
__attribute__((noinline)) void func_00296C9C(u32 a) { stub_var = a; }
__attribute__((noinline)) void func_00296740(void) { stub_var++; }

void func_00296D4C(u32 a) {
    func_00296714();
    func_00296C9C(a);
    func_00296740();
}
