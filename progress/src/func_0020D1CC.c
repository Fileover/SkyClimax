volatile u64 stub;
__attribute__((noinline)) void func_0020CF5C(u64 a, u64 b, u64 c, u64 d, u64 e) {
    stub = a + b + c + d + e;
}

void func_0020D1CC(u64 a, u64 b, u64 c, u64 d) {
    func_0020CF5C(a, b, c, d, 0);
}
