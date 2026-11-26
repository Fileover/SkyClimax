s32 func_0037F020(u32 *p) {
    s32 v = 0;
    if (__builtin_expect(p != NULL, 1)) {
        v = (s32)((__builtin_clz(*p ^ 0x46494f53u) & 0xffffffffu) >> 5);
    }
    return v;
}
