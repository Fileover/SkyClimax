/* identical to func_00251B1C (matched), with its names changed by decompdecomp */
extern u32 D_004CC9E0[];

volatile int stub;
__attribute__((noinline)) void func_002519B4(void *a, void *b, void *c) {
    stub = 1;
}

void func_00251B50(u32 *a, void *b, void *c) {
    func_002519B4(a, b, c);
    *a = (u32)&D_004CC9E0;
}
