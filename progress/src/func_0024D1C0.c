/* identical to func_00249880 (matched), with its names changed by decompdecomp */
s32 func_00261AE8(void *);

static volatile int s_stub;
__attribute__((noinline)) void func_0024BF70(void *arg) {
    s_stub = (int)(long)arg;
}

s32 func_0024D1C0(void *arg) {
    if (func_00261AE8(arg)) {
        func_0024BF70(arg);
        return 1;
    }
    return 0;
}
