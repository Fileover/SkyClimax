extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) void func_00268458(u32 a, s32 b, s32 c) {
    stub = (int)a + b + c;
}

void func_00268540(u32 a, s32 b, s32 c) {
    func_0029186C();
    func_00268458(a, b, c);
    func_0029181C();
}
