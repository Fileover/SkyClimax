/* identical to func_002FAF10 (matched), with its names changed by decompdecomp */
volatile u64 stub;
__attribute__((noinline)) void func_002FB090(u64 a, u64 b, u64 c, u64 d) {
    stub = a + b + c + d;
}

void func_002FB2E4(u64 a, u64 b, u64 c) {
    func_002FB090(a, 1, b, c);
}
