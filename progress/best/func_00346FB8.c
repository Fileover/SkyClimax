__attribute__((noinline)) void func_00221C60(void *p) { *(volatile int *)p = 1; }
void func_00346FB8(char *p) {
    u32 vptr = *(u32 *)p;
    s32 offset = *(s32 *)(u64)(vptr - 28);
    func_00221C60(p + offset);
}
