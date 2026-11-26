/* identical to func_002155E0 (matched), with its names changed by decompdecomp */
extern u64 func_00226044(void *);

s32 func_002157B4(void *s) {
    if (*(s32 *)s == 0x12) {
        return func_00226044((char *)s + 0x28) != 0;
    }
    return 0;
}
