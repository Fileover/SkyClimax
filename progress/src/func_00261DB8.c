/* identical to func_00261538 (matched), with its names changed by decompdecomp */
extern u32 D_004CCF80[];

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
} S;

void func_00261DB8(S *s, u32 a, u32 i, u32 e, u32 f, u32 g, u32 h) {
    s->vptr = (u32)&D_004CCF80;
    s->a = a;
    s->b = 0;
    s->c = 0;
    s->d = 0;
    s->e = e;
    s->f = f;
    s->g = g;
    s->h = h;
    s->i = i;
}
