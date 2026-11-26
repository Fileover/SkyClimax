typedef struct {
    u32 x, y, z;
    u64 w;
} Struct24;

typedef struct {
    Struct24 v1;
    Struct24 v2;
} Pair24;

void func_0033548C(Pair24 *dst, const Pair24 *src) {
    dst->v1 = src->v1;
    dst->v2 = src->v2;
}
