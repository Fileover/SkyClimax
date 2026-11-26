/* identical to func_002FA480 (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) s32 func_002FA35C(void *a, void *c) {
    stub = 2;
    return 0;
}

__attribute__((noinline)) void *func_002F9718(void *a, u32 b, u32 ret) {
    stub = 1;
    return a;
}

void *func_002FA5D0(void *a, u32 b, void *c) {
    s32 ret = func_002FA35C(a, c);
    if (ret < 0) {
        return NULL;
    }
    return func_002F9718(a, b, (u32)ret);
}
