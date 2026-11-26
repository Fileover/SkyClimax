/* identical to func_0026860C (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);

volatile int stub;
__attribute__((noinline)) void func_002688A4(u32 a, u32 b, s32 c, s32 d);

void func_0026898C(u32 a, u32 b, s32 c, s32 d) {
    func_0029186C();
    func_002688A4(a, b, c, d);
    func_0029181C();
}

__attribute__((noinline)) void func_002688A4(u32 a, u32 b, s32 c, s32 d) {
    stub = a + b + c + d;
}
