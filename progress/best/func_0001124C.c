extern void func_000D14A0(void);
extern u32 *D_004C9908;
extern u32 B_00571C24[];

void func_0001124C(u32 *p, u32 a, u32 b) {
    func_000D14A0();
    p[0] = (u32)D_004C9908;
    p[1] = 6;
    p[2] = 0;
    p[3] = 0;
    B_00571C24[3] = a;
    B_00571C24[4] = b;
}
