void func_002AC594(void) __attribute__((noreturn));
u32 func_0030068C(u32);
u32 func_00300694(u32);
u32 func_0030069C(u32);

u32 func_00300A00(s32 x, u32 y) {
    if (x == 0xFF) {
        return 0;
    }
    switch ((s32)(x & 0x70)) {
    case 0x00:
    case 0x10:
    case 0x50:
        return 0;
    case 0x20:
        return func_0030069C(y);
    case 0x30:
        return func_00300694(y);
    case 0x40:
        return func_0030068C(y);
    default:
        func_002AC594();
    }
}
