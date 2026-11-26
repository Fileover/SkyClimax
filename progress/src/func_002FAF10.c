volatile u64 stub;
__attribute__((noinline)) void func_002FAE58(u64 a, u64 b, u64 c, u64 d) {
    stub = a + b + c + d;
}

void func_002FAF10(u64 a, u64 b, u64 c) {
    func_002FAE58(a, 1, b, c);
}
