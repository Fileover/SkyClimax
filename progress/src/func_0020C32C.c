void func_0020C2D4(void);
s32 func_0020BFF0(u32, u32);
void func_0020C27C(void);

s32 func_0020C32C(u64 a, u64 b) {
    func_0020C2D4();
    s32 ret = func_0020BFF0((u32)a, (u32)b);
    func_0020C27C();
    return ret;
}

volatile int stub;
void func_0020C2D4(void) { stub = 1; }
s32 func_0020BFF0(u32 a, u32 b) { stub = a + b; return stub; }
void func_0020C27C(void) { stub = 2; }
