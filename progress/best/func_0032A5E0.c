__attribute__((noinline)) void func_0032A5F4(void *p) {
    *(volatile int *)p = 1;
}

void func_0032A5E0(char *p) {
    u32 vptr = *(u32 *)p;
    s32 offset = *(s32 *)(u64)(vptr - 12);
    func_0032A5F4(p + offset);
}
