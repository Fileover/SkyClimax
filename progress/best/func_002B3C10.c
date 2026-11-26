extern u32 D_005715D0;
extern void func_002A7CAC(s32);
extern void func_002A7C30(s32);

u32 func_002B3C10(u32 val) {
    u32 old;
    func_002A7CAC(1);
    old = D_005715D0;
    D_005715D0 = val;
    func_002A7C30(1);
    return old;
}
