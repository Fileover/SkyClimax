extern char D_004CD8E8[];

volatile int stub;
__attribute__((noinline)) void func_002D980C(void *a, void *b) {
    stub = (int)(long)a;
}

void func_002D99F4(void *a, void *b, void *c) {
    func_002D980C(a, b);
    *(void **)((char *)a + 0x40) = c;
    *(void **)a = (void *)D_004CD8E8;
    if (c != 0) {
        *(void **)((char *)c + 0x3c) = a;
    }
}
