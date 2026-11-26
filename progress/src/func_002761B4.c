/* identical to func_002704E8 (matched), with its names changed by decompdecomp */
extern const char STR_004642C0[];
void func_00294C4C(const char *);

s32 func_002761B4(s8 *arg0) {
    if (__builtin_expect(arg0 == NULL, 0)) {
        func_00294C4C(STR_004642C0);
        return -1;
    }
    return arg0[1];
}
