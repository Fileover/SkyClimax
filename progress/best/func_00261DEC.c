extern u32 D_004CCFC0[];

typedef struct {
    u32 vptr;
    u32 a;
    u32 b;
    u32 c;
    u32 d;
    u32 e;
    u32 f;
    u32 g;
    u32 h;
    u32 i;
    f32 j;
    f32 k;
} S;

void func_00261DEC(S *s, u32 a, u32 b, u32 c, u32 d) {
    s->vptr = (u32)&D_004CCFC0;
    s->a = a;
    s->b = b;
    s->c = c;
    s->d = d;
    s->e = 0;
    s->f = 0;
    s->g = 0;
    s->h = 0;
    s->i = 0;
    s->k = 1.0f;
    s->j = 1.0f;
}
