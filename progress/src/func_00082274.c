volatile int stub;
__attribute__((noinline)) void func_00082070(u32 x) {
    stub = x;
}

void func_00082274(u32 *s) {
    func_00082070(s[2]);
}
