typedef struct { u32 a, b, c; } S;
extern u32 D_004CC9B0[];
void func_00251CD4(S *s, u32 b, u32 c) {
    s->a = (u32)&D_004CC9B0;
    s->b = b;
    s->c = c;
}
