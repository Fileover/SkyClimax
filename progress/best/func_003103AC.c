extern void func_00018F9C(u32);
extern void func_0015065C(u32);
extern void func_00303608(u32) __attribute__((noreturn));
void func_003103AC(u32 p) {
    func_00018F9C(p + 0x18);
    while (1) { func_0015065C(0); func_00303608(p); }
}
