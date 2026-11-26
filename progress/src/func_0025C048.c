/* identical to func_00239D88 (matched), with its names changed by decompdecomp */
extern u32 D_004CCC90[];
extern void func_002F68B0(void *ptr, u32 size);

volatile int stub;
__attribute__((noinline)) void func_0025C03C(void *s) {
    stub = 1;
}

void func_0025C048(u32 *this) {
    *this = (u32)D_004CCC90;
    func_0025C03C(this);
    func_002F68B0(this, 0x40);
}
