extern const char STR_00463828[];
void func_002926D4(const char *);

s32 func_002704E8(s8 *arg0) {
    if (__builtin_expect(arg0 == NULL, 0)) {
        func_002926D4(STR_00463828);
        return -1;
    }
    return arg0[1];
}
