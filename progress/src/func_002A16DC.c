typedef struct { u32 q, r; } S;
S *func_002A16DC(u64 p, s32 a, s32 b) { S *s = (S *)(u32)p; s->q = a / b; s->r = a - b * (a / b); return s; }
