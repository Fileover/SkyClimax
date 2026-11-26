extern void func_0029186C(void);
extern void func_0029181C(void);

__attribute__((noinline)) s32 func_0027027C(u32 x) {
    *(volatile int *)(u64)x = 1;
    return x;
}

s32 func_002702FC(u64 arg) {
    s32 ret;
    func_0029186C();
    ret = func_0027027C((u32)arg);
    func_0029181C();
    return ret;
}
