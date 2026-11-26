typedef struct { u32 a, b, c; } S;

S *func_001CF7DC(u64 dst, const S *src) {
    S *s = (S *)dst;
    *s = *src;
    return s;
}
