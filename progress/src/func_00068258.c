extern int func_001AF60C(void);
extern s32 B_00621688[];

void func_00068258(s32 arg0) {
    int res = func_001AF60C();
    if (res >= 0 && res != arg0) {
        if (B_00621688[0xf8 / 4] != res) {
            B_00621688[0xf8 / 4] = arg0;
        }
        if (B_00621688[0x200 / 4] != res) {
            B_00621688[0x200 / 4] = arg0;
        }
    }
}
