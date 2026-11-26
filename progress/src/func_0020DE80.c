static volatile int stub;
__attribute__((noinline)) void func_0020DE1C(void) { stub = 1; }
__attribute__((noinline)) void func_0020DDB8(void) { stub = 2; }

s32 func_0020DE80(void) {
    func_0020DE1C();
    func_0020DDB8();
    return 0;
}
