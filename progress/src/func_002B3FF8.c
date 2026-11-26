/* identical to func_002B3FE0 (matched), with its names changed by decompdecomp */
typedef struct { u32 a, b; } S;
extern u32 D_004E1FE0[];
S *func_002B3FF8(u64 p, u32 v) {
    S *s = (S *)p;
    s->a = (u32)&D_004E1FE0;
    s->b = v;
    return s;
}
