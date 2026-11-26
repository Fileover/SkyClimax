__attribute__((noinline)) void func_00221B9C(void *p) { *(volatile int *)p = 1; }
void func_00346FA4(char *p) {
    u32 vptr = *(u32 *)p;
    s32 offset = *(s32 *)(u64)(vptr - 16);
    func_00221B9C(p + offset);
}
