extern u32 D_004C02F0[];

u32 func_000130E0(s32 arg) {
    s32 idx = 0x16;
    if (arg <= 0x15) idx = arg > 0 ? arg : 0;
    return D_004C02F0[idx];
}
