extern char B_015CE0B0[];

volatile int stub;
__attribute__((noinline)) void func_001E85F4(void *a0, void *a1, void *a2, void *a3, void *a4) {
    stub = (int)(long)a0;
}

void func_001E8944(void *a, void *b, void *c, void *d) {
    func_001E85F4(B_015CE0B0, a, b, c, d);
}
