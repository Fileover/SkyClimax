volatile int stub;
__attribute__((noinline)) void func_002511A4(void *arg) {
    stub = (int)(long)arg;
}

s32 func_002511CC(void *arg) {
    func_002511A4(arg);
    return 0;
}
