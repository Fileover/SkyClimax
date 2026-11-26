/* identical to func_002702FC (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);

__attribute__((noinline)) s32 func_002703AC(u32 x) {
    *(volatile int *)(u64)x = 1;
    return x;
}

s32 func_002703F0(u64 arg) {
    s32 ret;
    func_0029186C();
    ret = func_002703AC((u32)arg);
    func_0029181C();
    return ret;
}
