/* identical to func_001AA530 (matched), with its names changed by decompdecomp */
volatile u64 stub;
__attribute__((noinline)) void func_002E4C78(u64 x) {
    stub = x;
}

void func_002E5B08(u64 a, u64 b) {
    func_002E4C78(b);
}
