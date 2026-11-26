extern u8 func_000D1558(void);
extern void func_001C0518(void);
extern void func_0006A278(void);
extern void func_00068EC8(void);
extern void func_0014FB78(void);
extern void func_001484B0(void);
extern void func_001AFA54(void);

s32 func_00011170(void) {
    s32 ret = 0;
    if (func_000D1558()) {
        func_001C0518();
        func_0006A278();
        func_00068EC8();
        func_0014FB78();
        func_001484B0();
        func_001AFA54();
        ret = 1;
    }
    return ret;
}
