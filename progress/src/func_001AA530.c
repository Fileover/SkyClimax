volatile u64 stub;
__attribute__((noinline)) void func_001A98F8(u64 x) {
    stub = x;
}

void func_001AA530(u64 a, u64 b) {
    func_001A98F8(b);
}
