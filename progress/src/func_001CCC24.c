extern void func_002A8AAC(char *, const char *, u32);

void func_001CCC24(char *dest, const char *src, u32 n) {
    func_002A8AAC(dest, src, n - 1);
    dest[n - 1] = 0;
}
