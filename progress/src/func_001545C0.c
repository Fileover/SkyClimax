/* identical to func_0015459C (matched), with its names changed by decompdecomp */
extern u32 D_0056579C;
extern void D_004D5020(void);

void func_001545C0(u64 handler) {
    if (handler != 0) {
        D_0056579C = (u32)handler;
        return;
    }
    D_0056579C = (u32)D_004D5020;
}
