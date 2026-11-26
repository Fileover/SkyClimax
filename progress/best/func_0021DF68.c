extern char STR_0045B498[];
void func_0020D028(u32, const char *, s32);
s32 func_0021DDF0(void *, u64, u64, u32);

s32 func_0021DF68(void *a, u64 b, u64 c, u32 d) {
    if (__builtin_expect(!a, 0)) {
        func_0020D028(0, STR_0045B498, -2);
        return -2;
    }
    return func_0021DDF0(a, b, c, d);
}
