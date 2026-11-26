s32 func_00017940(u32 *p, f32 value) {
    u32 v = *p;
    if (v == 0) return 0;
    *(f32 *)((u32)(u64)v + 0x30) = value;
    return 1;
}
