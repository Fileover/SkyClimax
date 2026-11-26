s32 func_00017820(u32 *p) {
    u32 v = *p;
    if (v == 0) return 1;
    return (*(u32 *)(u32)(u64)v >> 2) & 1;
}
