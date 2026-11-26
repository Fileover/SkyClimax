extern char D_004CCC28[];

void func_00256CA4(void *s, u32 b, u32 c) {
    u32 *p = (u32 *)s;
    u32 *q = (u32 *)((char *)s + 4);
    p[7] = c;
    p[5] = 0;
    p[6] = b;
    *q = 0;
    q++;
    *q = 0;
    q++;
    *q = 0;
    p[4] = 0;
    p[0] = (u32)&D_004CCC28;
}
