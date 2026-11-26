/* identical to func_00251D7C (matched), with its names changed by decompdecomp */
volatile u32 stub;
__attribute__((noinline)) void func_002519F8(u32 x) {
    stub = x;
}

void func_00251D84(u32 *s) {
    func_002519F8(s[1]);
}
