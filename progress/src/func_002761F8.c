/* identical to func_002702FC (matched), with its names changed by decompdecomp */
extern void func_00294C28(void);
extern void func_00294C04(void);

__attribute__((noinline)) s32 func_002761B4(u32 x) {
    *(volatile int *)(u64)x = 1;
    return x;
}

s32 func_002761F8(u64 arg) {
    s32 ret;
    func_00294C28();
    ret = func_002761B4((u32)arg);
    func_00294C04();
    return ret;
}
