extern int func_001AF60C(void);
extern void func_001AF854(int, int);
extern s32 B_00621688[];

void func_000682BC(int arg0) {
    int res = func_001AF60C();
    if (res < 0) {
        B_00621688[0x200 / 4] = 1;
        B_00621688[0xf8 / 4] = 0;
    } else {
        if (arg0 == 0) {
            B_00621688[0xf8 / 4] = res;
            B_00621688[0x200 / 4] = -1;
        } else {
            B_00621688[0xf8 / 4] = -1;
            B_00621688[0x200 / 4] = (arg0 == 1) ? res : -1;
        }
    }

    if (__builtin_expect(res != 0, 1)) func_001AF854(0, 0);
    if (__builtin_expect(res != 1, 1)) func_001AF854(1, 0);
    if (__builtin_expect(res != 2, 1)) func_001AF854(2, 0);
    if (__builtin_expect(res != 3, 1)) func_001AF854(3, 0);
    if (__builtin_expect(res != 4, 1)) func_001AF854(4, 0);
    if (__builtin_expect(res != 5, 1)) func_001AF854(5, 0);
    if (__builtin_expect(res != 6, 1)) func_001AF854(6, 0);
}
