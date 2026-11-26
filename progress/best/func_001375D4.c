extern char B_014976B8[];

s32 func_001375D4(s32 arg0) {
    u32 idx = ((u32)(arg0 | (arg0 - 1)) >> 31) ^ 1;
    char *e;
    if (arg0 == -1) {
        e = *(char **)B_014976B8;
        if (!e) {
            e = B_014976B8 + 4;
        }
    } else {
        e = B_014976B8 + 4 + idx * 0x179c;
    }
    return *(s32 *)(e + 0x1b8) == 3;
}
