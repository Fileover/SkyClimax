/* identical to func_00262CBC (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_00262CDC(void *obj, u32 x) {
    stub = x;
}

void func_00262D00(u32 *s) {
    func_00262CDC(s, s[6]);
}
