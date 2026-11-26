typedef struct {
    u32 x, y, z;
} Vec3;

typedef struct {
    Vec3 v1;
    Vec3 v2;
} S;

void func_003351D0(S *dst, const S *src) {
    *dst = *src;
}
