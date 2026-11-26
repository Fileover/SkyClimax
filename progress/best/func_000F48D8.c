typedef struct { u8 pad[0xc]; u32 a; u32 b; u32 c; u32 d; u8 e; } S48D8;
void func_000F48D8(S48D8 *s) {
    s->a = 0x3f800000u;
    s->b = 0x3f800000u;
    s->c = 8;
    s->d = 8;
    s->e = 0;
}
