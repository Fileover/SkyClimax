volatile int stub;
__attribute__((noinline)) void func_00262C94(void *obj, u32 x) {
    stub = x;
}

void func_00262CBC(u32 *s) {
    func_00262C94(s, s[6]);
}
