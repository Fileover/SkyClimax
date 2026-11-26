extern void func_00018F9C(u32);
extern void func_0015065C(u32);
extern void func_00303608(u32) __attribute__((noreturn));
void func_00310448(void) {
    unsigned int r31, r30, r3, r0;
    r0 = r31 + 0x18;
    r31 = 0;
    r3 = (unsigned int)(r0 << 5);
    func_00018F9C(r3);
    while (1) {
        r30 = 0;
        r3 = (unsigned int)(r30 << 5);
        func_0015065C(r3);
        r31 = 0;
        func_00303608(r31);
    }
}
