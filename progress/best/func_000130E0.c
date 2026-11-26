extern u32 D_004C02F0[];

u32 func_000130E0(s32 arg) {
    s32 idx = arg;
    if (idx > 0x15) idx = 0x16;
    return D_004C02F0[idx >= 0 ? idx : 0];
}
