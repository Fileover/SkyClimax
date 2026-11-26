volatile int stub;
__attribute__((noinline)) void func_00268F10(void) { stub = 1; }
__attribute__((noinline)) void func_00269364(void) { stub = 2; }

void func_00269430(void) {
    func_00268F10();
    func_00269364();
}
