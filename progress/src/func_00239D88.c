extern u32 D_004CBCC8[];
extern void func_002F68B0(void *ptr, u32 size);

volatile int stub;
__attribute__((noinline)) void func_00239D7C(void *s) {
    stub = 1;
}

void func_00239D88(u32 *this) {
    *this = (u32)D_004CBCC8;
    func_00239D7C(this);
    func_002F68B0(this, 0x40);
}
