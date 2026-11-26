typedef struct { u32 a; u32 b; char tail[0x60]; } S;
extern S B_005FE794[];
int func_00017564(u32 x) {
    int hi = x >> 16, lo = x & 0xffff;
    S *s = &B_005FE794[hi];
    u32 *p = (u32 *)((char *)s + 4);
    if (p[-1] == 0) return 0;
    if (p[0] <= (u32)lo) return 0;
    u32 *e = (u32 *)(p[-1] + lo * 4);
    if (*e == 0) return 0;
    return **(u32 **)e;
}
