/* identical to func_001CCC24 (matched), with its names changed by decompdecomp */
extern void func_002A8DD4(char *, const char *, u32);

void func_001CCC80(char *dest, const char *src, u32 n) {
    func_002A8DD4(dest, src, n - 1);
    dest[n - 1] = 0;
}
