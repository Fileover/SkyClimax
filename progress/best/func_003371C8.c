typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Vec3i;

s32 func_001D0794(s32 a, s32 b, s32 c);
void func_001D01D0(Vec3i *v, s32 x);

void func_003371C8(Vec3i *dst, const Vec3i *src, const s32 *add) {
    Vec3i tmp;
    dst[0] = *src;
    tmp = *src;
    s32 ret = func_001D0794(tmp.a, tmp.b, tmp.c);
    func_001D01D0(&tmp, ret + *add);
    dst[1] = tmp;
}
