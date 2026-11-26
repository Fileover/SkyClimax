/* identical to func_0026FB04 (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) void func_00271110(u32 a, s32 b) {
    stub = (int)a + b;
}

void func_00271150(u32 a, s32 b) {
    func_0029186C();
    func_00271110(a, b);
    func_0029181C();
}
