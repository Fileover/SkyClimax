extern u8 B_0153F850[];

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Entry;

void func_001E5DC4(s32 count, u32 *out) {
    if (count <= 0) return;
    if (out == NULL) return;

    u32 base = (u32)B_0153F850;
    Entry *e = (Entry *)(base + 0x178240);
    s32 found = 0;
    s32 i = 0;

    goto check;
    for (;;) {
        i++;
        e++;
        if (i > 31) break;
check:
        if (e->a < 0) {
            continue;
        }
        found++;
        i++;
        e->a = 0x80000000;
        e->b = 0;
        e->c = 0;
        e++;
        *out++ = i;
        if (count == found) return;
        if (i > 31) break;
    }
}
