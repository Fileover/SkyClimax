u32 func_000176D8(u32 *p) {
    u32 v = *p;
    if (v == 0) return 0;
    u32 flags = *(u32 *)(u32)(u64)v;
    if ((flags & 1) == 0) return 0;
    return *(u32 *)((u32)(u64)v + 0x68);
}
