/* identical to func_00291B78 (matched), with its names changed by decompdecomp */
s32 func_002F5B48(const u16 *ptr, s32 len, u16 *out) {
    if (len <= 0x11) {
        return -1;
    }
    if (ptr[0] != 0x8000) {
        return -2;
    }
    if ((s16)ptr[1] <= 0xd) {
        return -1;
    }
    *out = ptr[8];
    return 0;
}
