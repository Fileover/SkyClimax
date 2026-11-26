extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) void func_002685A0(u32 a, u32 b, s32 c, s32 d);

void func_0026867C(u32 a, u32 b) {
    func_0029186C();
    func_002685A0(a, b, 0, 0x7fffffff);
    func_0029181C();
}

__attribute__((noinline)) void func_002685A0(u32 a, u32 b, s32 c, s32 d) {
    stub = a + b + c + d;
}
