__attribute__((noinline)) void func_00222360(void *p) {
    *(volatile int *)p = 1;
}

void func_00347060(char *p) {
    u32 vptr = *(u32 *)p;
    s32 offset = *(s32 *)(u64)(vptr - 24);
    func_00222360(p + offset);
}
