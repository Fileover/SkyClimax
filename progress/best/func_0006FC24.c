void func_002B5838(void *);
void func_002B5A58(void *);
void func_002BA210(void *);
void func_002BA430(void *);

extern u8 B_00629FC0[];
extern u64 B_017020B0;
extern u64 B_017020B8;
extern u64 B_017020C0;
extern s32 B_017020C8;
extern s32 B_017020CC;
extern s32 B_017020D0;

void func_0006FC24(s32 a, s32 b) {
    if (a == 1) {
        if (b == 0xffff) {
            func_002B5A58(B_00629FC0);
            func_002BA430(B_00629FC0 + 1);
            if (++B_017020B0 == 1) {
                B_017020C8 = 0;
            }
            if (++B_017020B8 == 1) {
                B_017020CC = 0;
            }
            if (++B_017020C0 == 1) {
                B_017020D0 = 0;
            }
        }
    } else if (a == 0) {
        if (b == 0xffff) {
            func_002BA210(B_00629FC0 + 1);
            func_002B5838(B_00629FC0);
        }
    }
}
