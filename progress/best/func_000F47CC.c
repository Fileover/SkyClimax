typedef struct { u8 pad[0xc]; u32 a; u32 b; u32 c; u32 d; u8 e; } S48D8;
void func_000F48D8(S48D8 *s) {
    s->a = 0x3f800000u;
    s->b = 0x3f800000u;
    s->c = 8;
    s->d = 8;
    s->e = 0;
}

typedef struct { u32 f0; u32 f4; u8 f8; } T47CC;
void func_000F47CC(T47CC *s, int x) {
    s->f0 = (u32)x;
    s->f4 = (u32)-1;
    s->f8 = 1;
    switch (x) {
        case 0: return;
        case 1: return;
        case 2: return;
        case 3: return;
        case 4: return;
        case 5: return;
        case 6: return;
        case 7: return;
        case 8: return;
        default: return;
    }
}
