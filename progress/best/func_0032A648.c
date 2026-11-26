extern char D_004CAED4[];
extern char D_004CAF00[];
extern void func_002B47F8(void *);
extern void func_000F3ED0(void *);

void func_0032A648(char *s) {
    char *orig = s;
    char *v = D_004CAED4;
    *(u32 *)(s + 8) = (u32)(u64)(v + 0x14);
    *(u32 *)(s + 0) = (u32)(u64)v;
    s += 8;
    *(u32 *)s = (u32)(u64)D_004CAF00;
    func_002B47F8(s);
    func_000F3ED0(orig);
}
