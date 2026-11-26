extern char B_015CE0B0[];

volatile int stub;
__attribute__((noinline)) void func_001EBC30(void *a0, void *a1, void *a2, void *a3) {
    stub = (int)(long)a0;
}

void func_001EC1A0(void *a, void *b, void *c) {
    func_001EBC30(B_015CE0B0, a, b, c);
}
