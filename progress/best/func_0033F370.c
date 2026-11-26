typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s64 d;
} V;

typedef struct {
    V v1;
    V v2;
} Pair;

void func_001D217C(V *);

void func_0033F370(Pair *dst, const V *src, const s64 *add) {
    dst->v1 = *src;
    V tmp = { src->a, src->b, src->c, src->d + *add };
    func_001D217C(&tmp);
    dst->v2 = tmp;
}

volatile int dummy;
__attribute__((noinline)) void func_001D217C(V *p) {
    p->a += dummy;
}
