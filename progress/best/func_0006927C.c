extern s32 D_00621A88[];

u32 func_0006927C(s32 a0) {
    char *base;
    if (a0 == 1) {
        char *p = (char *)&D_00621A88;
        if (*(s32 *)(p + 0x83cc) >= 0) {
            base = p + 0x41e4;
        } else {
            base = p;
        }
    } else {
        base = (char *)&D_00621A88;
    }
    return (u32)(base + 0x24);
}
