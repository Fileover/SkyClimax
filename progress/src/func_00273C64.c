extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) void func_00273AFC(u32 a, u32 b, u32 c) { stub = (s32)a + (s32)b + (s32)c; }

void func_00273C64(u32 a, u32 b) {
    func_0029186C();
    func_00273AFC(a, b, 0x40000000);
    func_0029181C();
}
