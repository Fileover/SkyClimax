volatile int stub;
void func_001D38A8(u32 p) { stub = p; }
extern u32 func_0032CD40(u32, u32);
extern void func_0030A0C8(u64, u32, u32);

u32 func_001D632C(u32 arg) {
    char obj[32];
    u64 p31 = (u64)obj;
    u32 p29 = (u32)p31;
    func_001D38A8(p29);
    u32 ret = func_0032CD40(arg, p29);
    func_0030A0C8(p31, 1, 0);
    return ret;
}
