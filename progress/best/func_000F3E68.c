extern void (*D_00565690)(u32);

void func_000F3E68(u32 arg) {
    void (*fp)(u32) = D_00565690;
    if (arg) {
        fp(arg);
    }
}
