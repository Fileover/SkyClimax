s32 func_00261AE8(void *);

static volatile int s_stub;
__attribute__((noinline)) void func_00249778(void *arg) {
    s_stub = (int)(long)arg;
}

s32 func_00249880(void *arg) {
    if (func_00261AE8(arg)) {
        func_00249778(arg);
        return 1;
    }
    return 0;
}
