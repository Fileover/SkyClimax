/* identical to func_002B3FE0 (matched), with its names changed by decompdecomp */
typedef struct { u32 a, b; } S;
extern u32 D_004E2018[];
S *func_002B40A0(u64 p, u32 v) {
    S *s = (S *)p;
    s->a = (u32)&D_004E2018;
    s->b = v;
    return s;
}
