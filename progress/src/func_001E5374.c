/* identical to func_001E0D50 (matched), with its names changed by decompdecomp */
extern u8 B_0153F250[];

__attribute__((noinline)) void func_001E5068(u64 p) {
    *(volatile int *)p = 1;
}

void func_001E5374(void) {
    func_001E5068((u64)(u32)&B_0153F250 + 0x110);
}
