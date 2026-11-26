extern u8 B_0153F250[];

__attribute__((noinline)) void func_001E0A5C(u64 p) {
    *(volatile int *)p = 1;
}

void func_001E0D50(void) {
    func_001E0A5C((u64)(u32)&B_0153F250 + 0x110);
}
