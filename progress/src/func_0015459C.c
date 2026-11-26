extern u32 D_005657A0;
extern void D_004D5028(void);

void func_0015459C(u64 handler) {
    if (handler != 0) {
        D_005657A0 = (u32)handler;
        return;
    }
    D_005657A0 = (u32)D_004D5028;
}
