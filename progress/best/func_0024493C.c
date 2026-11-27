typedef struct { u32 a, b, c, d, e; } S;
extern u32 D_004CC458[];

void func_0024493C(S *s, u32 d, u32 c, u32 e) {
    s->a = (u32)&D_004CC458;
    s->b = 0;
    s->c = c;
    s->d = d;
    s->e = e;
}
