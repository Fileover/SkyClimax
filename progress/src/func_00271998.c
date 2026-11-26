extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) void func_00271590(u32 a, u32 b, u32 c) {
    stub = (int)a + (int)b + (int)c;
}

void func_00271998(u32 a, u32 b, u32 c) {
    func_0029186C();
    func_00271590(a, b, c);
    func_0029181C();
}
