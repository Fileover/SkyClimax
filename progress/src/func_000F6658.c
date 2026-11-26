/* identical to func_000F4838 (matched), with its names changed by decompdecomp */
typedef struct { u8 pad[0xc]; u32 a[14]; } S;
void func_000F6658(S *s) {
    u32 z = 0, p = 0x3f800000u, n = 0xbf800000u;
    s->a[0] = z;  // 0xc
    s->a[1] = z;
    s->a[2] = p;
    s->a[3] = p;
    s->a[4] = z;
    s->a[5] = p;
    s->a[6] = p;
    s->a[7] = z;
    s->a[8] = n;
    s->a[9] = n;
    s->a[10] = z;
    s->a[11] = n;
    s->a[12] = z;
    s->a[13] = p;
    *(u32 *)((char *)s + 0x44) = z;
}
