/* identical to func_00284348 (matched), with its names changed by decompdecomp */
volatile int stub_var;
__attribute__((noinline)) void func_00284288(void) { stub_var++; }
__attribute__((noinline)) void func_002858CC(u32 a) { stub_var = a; }
__attribute__((noinline)) void func_0028431C(void) { stub_var++; }

void func_00285928(u32 a) {
    func_00284288();
    func_002858CC(a);
    func_0028431C();
}
