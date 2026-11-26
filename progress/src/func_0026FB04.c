extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) void func_0026F7BC(u32 a, s32 b) {
    stub = (int)a + b;
}

void func_0026FB04(u32 a, s32 b) {
    func_0029186C();
    func_0026F7BC(a, b);
    func_0029181C();
}
