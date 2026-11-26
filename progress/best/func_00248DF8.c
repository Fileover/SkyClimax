extern u32 D_004CCF68[];
extern u32 D_004CC5E8[];

typedef struct {
    volatile u32 vptr;
    u32 b;
    u32 c;
    u32 a;
    volatile u32 e;
    volatile u32 f;
    u32 g;
} S;

void func_00248DF8(S *s, u32 a, u32 b, u32 c) {
    s->vptr = (u32)&D_004CCF68;
    s->c = c;
    s->b = b;
    s->vptr = (u32)&D_004CC5E8;
    s->g = 0x100;
    s->a = a;
    s->f = 0;
    s->e = 0;
}
