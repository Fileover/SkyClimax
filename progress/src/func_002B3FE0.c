typedef struct { u32 a, b; } S;
extern u32 D_004E1FD8[];
S *func_002B3FE0(u64 p, u32 v) {
    S *s = (S *)p;
    s->a = (u32)&D_004E1FD8;
    s->b = v;
    return s;
}
