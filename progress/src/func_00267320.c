volatile int stub;
void func_00264650(void) { stub = 1; }
s32 func_00267244(s32 a, s32 b, s32 c, u32 d, u32 e, s32 f) { stub = a + b + c + d + e + f; return stub; }
void func_00264674(void) { stub = 2; }

extern u8 B_017022A8[];

s32 func_00267320(s32 a, s32 b, s32 c, u32 d) {
    s32 ret;
    func_00264650();
    ret = func_00267244(a, b, c, d, ((u32)B_017022A8 + 0x1f) & ~0x1f, 0x800);
    func_00264674();
    return ret;
}
