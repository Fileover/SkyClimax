/* identical to func_00284570 (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_00284288(void) { stub = 1; }
__attribute__((noinline)) void func_0028431C(void) { stub = 2; }

extern u32 B_016E8788[];
s32 func_00287038(u32, u32, u32, u32);

s32 func_002845DC(u32 a, u32 b, u32 c) {
    s32 ret;
    func_00284288();
    ret = func_00287038(B_016E8788[2], a, b, c);
    func_0028431C();
    return ret;
}
