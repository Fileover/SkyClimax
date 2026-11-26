__attribute__((noinline)) void func_00220FB4(void *p) { *(volatile int *)p = 1; }
void func_00346EC8(char *p) {
    u32 vptr = *(u32 *)p;
    s32 offset = *(s32 *)(u64)(vptr - 32);
    func_00220FB4(p + offset);
}
