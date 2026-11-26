/* identical to func_0023DDBC (matched), with its names changed by decompdecomp */
extern u32 D_004CC2C8[];
extern void func_0023D680(u32 *);
typedef struct { u32 a[13]; } S;
void func_0023E750(S *s) {
    s->a[0] = (u32)&D_004CC2C8;
    s->a[12] = (u32)&D_004CC2C8[12];
    func_0023D680((u32 *)s);
}
