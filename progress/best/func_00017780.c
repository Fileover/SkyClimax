s32 func_00017780(u32 *p) {
    u32 v = *p;
    if (v == 0) return 0;
    u32 flags = *(u32 *)(u32)(u64)v;
    if ((u64)(flags << 2) >> 2 == 0) return 0;
    *(u32 *)((u32)(u64)v + 0x70) = 0;
    return 1;
}
