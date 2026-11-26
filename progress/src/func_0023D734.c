/* identical to func_0023D680 (matched), with its names changed by decompdecomp */
extern u32 D_004CC1E0[];
extern u32 D_004CC268[];
extern u32 D_004CC258[];
extern void func_0025D7BC(void *);

typedef struct {
    u32 a[13];
} S;

void func_0023D734(S *s) {
    s->a[0] = (u32)&D_004CC1E0;
    s->a[12] = (u32)&D_004CC1E0 + 0x2c;
    volatile u32 *p = (volatile u32 *)s;
    p += 12;
    *p = (u32)&D_004CC258;
    *p = (u32)&D_004CC268;
    func_0025D7BC(s);
}
