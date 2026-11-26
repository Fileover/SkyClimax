/* identical to func_001CF7DC (matched), with its names changed by decompdecomp */
typedef struct { u32 a, b, c; } S;

S *func_00335270(u64 dst, const S *src) {
    S *s = (S *)dst;
    *s = *src;
    return s;
}
