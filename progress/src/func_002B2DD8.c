/* identical to func_002A16DC (matched), with its names changed by decompdecomp */
typedef struct { u32 q, r; } S;
S *func_002B2DD8(u64 p, s32 a, s32 b) { S *s = (S *)(u32)p; s->q = a / b; s->r = a - b * (a / b); return s; }
