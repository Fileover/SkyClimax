void func_002FBEF8(u32);
void func_0020BC84(u32, u32);

void func_002F847C(u32 arg) {
    u32 p = arg - 8;
    u32 val = *(u32 *)(u64)p;
    func_002FBEF8(arg);
    func_0020BC84(val, p);
}
