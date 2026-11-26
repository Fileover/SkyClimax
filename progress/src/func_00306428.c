extern u32 D_004CDB18[];
extern void func_000F3ED0(u32 *);

void func_0030641C(u32 *s);

void func_00306428(u32 *s) {
    s[0] = (u32)&D_004CDB18;
    func_0030641C(s);
    func_000F3ED0(s);
}

volatile int stub;
void func_0030641C(u32 *s) { stub = (int)(long)s; }
