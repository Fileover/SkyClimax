extern u32 D_004CCB68[];

volatile int stub;
__attribute__((noinline)) void func_00257D8C(void *a, void *b) {
    stub = 1;
}

void func_002582C8(u32 *a, void *b) {
    func_00257D8C(a, b);
    *a = (u32)&D_004CCB68;
    *(u32 *)((char *)a + 0x780) = 0;
}
