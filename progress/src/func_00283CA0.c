/* identical to func_0020C32C (matched), with its names changed by decompdecomp */
void func_00283AB4(void);
s32 func_00283C40(u32, u32);
void func_00283A60(void);

s32 func_00283CA0(u64 a, u64 b) {
    func_00283AB4();
    s32 ret = func_00283C40((u32)a, (u32)b);
    func_00283A60();
    return ret;
}

volatile int stub;
void func_00283AB4(void) { stub = 1; }
s32 func_00283C40(u32 a, u32 b) { stub = a + b; return stub; }
void func_00283A60(void) { stub = 2; }
