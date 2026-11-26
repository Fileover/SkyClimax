extern void *D_00565690;
extern void *D_00565694;
extern void func_000EA2BC(void);

void func_000F3E68(u32 arg) {
    if (arg) {
        ((void (*)(u32))D_00565690)((u32)arg);
    }
}

u32 func_000F3F38(u32 x) {
    return (u32)((s64 (*)(u32))D_00565694)(x);
}

u32 func_000F3F94(u32 x) {
    return (u32)((s64 (*)(u32, u32))D_00565694)(x, 0);
}

void func_000F3FF4(u32 x) {
    func_000EA2BC();
    ((void (*)(u32))D_00565690)((u32)x);
}

u32 func_000F4048(u32 x, u32 y) {
    func_000EA2BC();
    return (u32)((s64 (*)(u32, u32))D_00565694)(x, y);
}
