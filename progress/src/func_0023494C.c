s32 func_0023494C(u8 *r3, s32 r4) {
    if (r4 == -1) {
        return 1;
    }
    s32 diff = r4 ^ *(s32 *)(r3 + 0x30);
    return __builtin_abs(diff) < 1;
}
