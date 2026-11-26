extern char D_004CCA80[];

volatile int stub;
__attribute__((noinline)) void func_00254A6C(u32 a, s32 b) { stub = a + b; }

void func_00254C1C(void *self, s32 b) {
    int *p = (int *)self;
    func_00254A6C((u32)(u64)self, b);
    char *sub = (char *)self + 0x18;
    p += 3;
    p[0] = 0;
    p[2] = 0;
    p[1] = 0;
    *(void **)self = D_004CCA80;
    *(u8 *)(sub + 0x10) = 0;
    *(int *)(sub + 4) = 0;
    *(int *)((char *)self + 0x2c) = 0;
    *(int *)((char *)self + 0x38) = 0;
    *(int *)((char *)self + 0x30) = 0;
    *(int *)(sub + 0) = 0;
    *(int *)(sub + 8) = 0;
    *(int *)(sub + 0xc) = 0;
    *(int *)((char *)self + 0x34) = 1;
}
