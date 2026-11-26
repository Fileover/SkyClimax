typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
    s64 f10;
} DT;

volatile int stub;
__attribute__((noinline)) void func_001D217C(void *p) {
    stub = (int)(u64)p;
}

void func_001D2604(DT *a, const DT *b, const s64 *c) {
    a->f0 = b->f0;
    a->f4 = b->f4;
    a->f8 = b->f8;
    a->f10 = *c;
    func_001D217C(a);
}
