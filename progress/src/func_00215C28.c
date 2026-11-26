volatile u64 stub;
__attribute__((noinline)) void func_002159E8(u64 a, u64 b, u64 c, u64 d) {
    stub = a + b + c + d;
}

void func_00215C28(u64 a, u64 b, u64 c) {
    func_002159E8(a, 0, b, c);
}
