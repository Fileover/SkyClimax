/* identical to func_0026FB04 (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) void func_002709E8(u32 a, s32 b) {
    stub = (int)a + b;
}

void func_00270B84(u32 a, s32 b) {
    func_0029186C();
    func_002709E8(a, b);
    func_0029181C();
}
