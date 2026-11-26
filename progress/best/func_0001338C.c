extern char B_00571C50[];
extern s32 func_002705C0(u32);

typedef struct {
    u32 flag;
    u32 field4;
    u8 pad[0x23294 - 8];
} Sub;

#define SUB(i) ((Sub *)(B_00571C50 + 0xe0 + (u32)(i) * 0x23294))

s32 func_0001338C(s32 idx) {
    s32 i = idx;
    if (i < 0) {
        i = 0;
        if (SUB(0)->flag & 1) {
            i = 1;
            if (SUB(1)->flag & 1) {
                i = 2;
                if (SUB(2)->flag & 1) {
                    if (SUB(3)->flag & 1) return 0;
                    i = 3;
                }
            }
        }
    } else if (i > 2) {
        i = 3;
    }
    if (i < 0) i = 0;
    if (!(SUB(i)->flag & 1)) return 0;
    return func_002705C0(SUB(i)->field4);
}
