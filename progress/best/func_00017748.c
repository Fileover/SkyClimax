u32 func_00017748(u32 *p) {
    u32 v = *p;
    if (v == 0) goto ret0;
    u32 flags = *(u32 *)(u32)(u64)v;
    if ((u64)(flags << 2) >> 2 == 0) goto ret0;
    return *(u32 *)((u32)(u64)v + 0x74);
ret0:
    return 0;
}
