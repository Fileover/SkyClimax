extern void func_000F3ED0(u32);
extern u32 D_004CA4B0[];
extern u32 D_004CA478[];

void func_00313E84(u32 *p) {
    volatile u32 *q = p;
    q[0] = (u32)&D_004CA478;
    q[0] = (u32)&D_004CA4B0;
    func_000F3ED0((u32)(u64)q);
}
