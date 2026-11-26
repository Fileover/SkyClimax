extern void func_001510A4(void);
extern void cellSysutil_sysUtilCheckCallback(void);
extern void func_001513E8(void);
extern u8 func_00150AA8(void);
extern void func_00148570(void);
extern void func_0014FF28(void);
extern void func_00068400(void);
extern void func_00069200(void);
extern u64 func_000D1660(u32);

u8 func_00010F78(u32 arg) {
    func_001510A4();
    while (func_00150AA8()) {
        cellSysutil_sysUtilCheckCallback();
        func_001513E8();
    }
    func_00148570();
    func_0014FF28();
    func_00068400();
    func_00069200();
    return (u8)func_000D1660(arg);
}
