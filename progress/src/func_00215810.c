/* identical to func_002155E0 (matched), with its names changed by decompdecomp */
extern u64 func_00225F80(void *);

s32 func_00215810(void *s) {
    if (*(s32 *)s == 0x12) {
        return func_00225F80((char *)s + 0x28) != 0;
    }
    return 0;
}
