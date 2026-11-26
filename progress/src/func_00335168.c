typedef struct {
    u32 x, y, z;
} Vec3;

typedef struct {
    Vec3 v1;
    Vec3 v2;
} S;

void func_00335168(S *dst, const Vec3 *a, const Vec3 *b) {
    dst->v1 = *a;
    dst->v2 = *b;
}
