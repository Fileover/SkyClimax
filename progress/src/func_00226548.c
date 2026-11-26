s32 func_002FA35C(void *a, u32 c);
u32 func_002F9474(void *a, u32 b, u32 res);

s32 func_00226548(void *a, u32 b, u32 c) {
    s32 res = func_002FA35C(a, c);
    u16 ret = 0;
    if (res >= 0) {
        ret = func_002F9474(a, b, res);
    }
    return ret;
}
