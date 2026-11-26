volatile int stub;
__attribute__((noinline)) u32 func_00260CE4(u32 a, u32 b) { stub = a + b; return stub; }
__attribute__((noinline)) u32 func_00260D28(u32 a, u32 b) { stub = a + b; return stub; }

u32 func_002F8218(u32 a, u32 b, u32 c);
s32 func_0025F8B0(u32 a, u32 b);

s32 func_00261250(u32 a, u32 b) {
    u32 x = func_00260CE4(a, b);
    u32 d = func_00260D28(a, b);
    u32 y = func_002F8218(x, d, 4);
    return y + func_0025F8B0(a, b);
}
