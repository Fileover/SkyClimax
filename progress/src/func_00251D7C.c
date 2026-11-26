volatile u32 stub;
__attribute__((noinline)) void func_002519E8(u32 x) {
    stub = x;
}

void func_00251D7C(u32 *s) {
    func_002519E8(s[1]);
}
