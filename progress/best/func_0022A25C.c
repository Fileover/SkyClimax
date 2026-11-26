u32 func_002519F0(void *);
void *func_00229DC0(void *, void *);

volatile int stub;
__attribute__((noinline)) void *func_00229DC0(void *a, void *b) {
    stub = (int)(long)a + (int)(long)b;
    return (void *)(long)stub;
}

u32 func_0022A25C(void *a, void *b, s32 *c) {
    void *ret = func_00229DC0(a, b);
    if (!ret) {
        *c = -1;
        return 0;
    }
    return func_002519F0(ret);
}
