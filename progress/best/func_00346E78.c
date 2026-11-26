__attribute__((noinline)) void func_00220C3C(void *p) {
    *(volatile int *)p = 1;
}

void func_00346E78(char *p) {
    u32 vptr = *(u32 *)p;
    s32 offset = *(s32 *)(u64)(vptr - 20);
    func_00220C3C(p + offset);
}
