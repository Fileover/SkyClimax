typedef struct { u32 a, b, c, d, e, f, g; } S;
extern u32 D_004CC528[];
void func_00245418(S *s, u32 b, u32 c, u32 d) {
    s->a = (u32)&D_004CC528;
    s->b = b;
    s->c = c;
    s->d = d;
    s->e = 0;
    s->f = 0;
    s->g = 0;
}
