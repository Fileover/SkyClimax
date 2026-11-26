/* identical to func_002265B4 (matched), with its names changed by decompdecomp */
s32 func_002FA35C(void *a, u32 c);
u32 func_002F95DC(void *a, u32 b, u32 res);

u32 func_00226970(void *a, u32 b, u32 c) {
    s32 res = func_002FA35C(a, c);
    u32 ret = 0;
    if (res >= 0) {
        ret = func_002F95DC(a, b, res);
    }
    return ret;
}
