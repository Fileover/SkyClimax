typedef struct {
    u32 x, y, z;
    u64 w;
} Struct24;

typedef struct {
    Struct24 v1;
    Struct24 v2;
} Pair24;

void func_00335404(Pair24 *dst, const Struct24 *a, const Struct24 *b) {
    dst->v1 = *a;
    dst->v2 = *b;
}
