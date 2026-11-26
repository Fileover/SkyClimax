extern u32 D_004CC1B0[];
extern u32 D_004CC358[];

typedef struct {
    volatile u32 vptr;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
    u32 f;
    u32 g;
    u32 h;
    u32 i;
    u32 j;
    u32 k;
} S;

void func_00240C84(S *s, u32 g, u32 b) {
    s->vptr = (u32)&D_004CC1B0;
    s->c = 0;
    s->d = 0;
    s->b = b;
    s->g = g;
    s->vptr = (u32)&D_004CC358;
    s->e = 0;
    s->f = 0;
    s->h = 0;
    s->i = 0;
    s->j = 0;
    s->k = 0;
}
