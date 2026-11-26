extern char *B_00C5D448;

volatile int stub;
__attribute__((noinline)) void func_00093814(u32 a, void *b, void *c, void *d, void *e, float f, void *g) {
    stub = a;
}

void func_00093E78(int index, void *b, void *c, void *d, float f, void *g) {
    char *base = B_00C5D448;
    u32 *p = (u32 *)(base + 0x610 + index * 4);
    void *item = (void *)(base + 0x834 + index * 8);
    func_00093814(p[1], item, b, c, d, f, g);
}
