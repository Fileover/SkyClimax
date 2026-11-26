extern void func_001B8644(void);
extern void func_0016FE6C(void);
extern void func_000DF8FC(void);
extern void func_001A3C2C(void);
extern void func_001A92A8(void);
extern void func_000DCABC(void);
extern void func_000FF818(void);
extern void func_000DC400(void);
extern void func_000E4B48(void);
extern void func_000C6F38(s32);
extern void func_001B7330(void);
extern void func_0006BF38(void *);

volatile int stub_10C18;
__attribute__((noinline)) void func_00010C18(void) { stub_10C18 = 1; }

void func_00010DFC(void) {
    func_001B8644();
    func_0016FE6C();
    func_000DF8FC();
    func_001A3C2C();
    func_00010C18();
    func_001A92A8();
    func_000DCABC();
    func_000FF818();
    func_000DC400();
    func_000E4B48();
    func_000C6F38(7);
    func_001B7330();
    func_0006BF38(NULL);
}
