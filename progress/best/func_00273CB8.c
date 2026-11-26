extern u32 B_016DB1F8;
extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_00273AFC(u32, u32, u32);
extern void func_002738E0(u32);

u32 func_00274060(u32 v) {
    u32 old = B_016DB1F8;
    B_016DB1F8 = v;
    return old;
}

void func_00273C64(u32 a, u32 b) {
    func_0029186C();
    func_00273AFC(a, b, 0x40000000);
    func_0029181C();
}

void func_00273CB8(u32 a, u32 b) {
    func_0029186C();
    func_00273C64(a, b);
    func_002738E0(a);
    func_0029181C();
}
