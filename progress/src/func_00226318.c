s32 func_002FA35C(void *a, u32 c);
u64 func_002F971C(void *a, u32 b, u32 res);

u64 func_00226318(void *a, u32 b, u32 c) {
    s32 res = func_002FA35C(a, c);
    u64 ret = 0;
    if (res >= 0) {
        ret = func_002F971C(a, b, res);
    }
    return ret;
}
