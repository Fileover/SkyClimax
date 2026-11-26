extern u64 func_00226008(void *);

s32 func_002155E0(void *s) {
    if (*(s32 *)s == 0x12) {
        return func_00226008((char *)s + 0x28) != 0;
    }
    return 0;
}
