extern u8 B_0153F850[];

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Entry;

s32 func_001E5880(s32 id) {
    u32 i = id - 1;
    if (i <= 30) {
        Entry *e = (Entry *)(B_0153F850 + 0x178240);
        return e[i].a < 0;
    }
    return 0;
}
