typedef struct { u8 pad[0xc]; u32 a; u32 b; u32 c; u32 d; u8 e; } S48D8;
void func_000F48D8(S48D8 *s) {
    s->b = 0x3f800000u;
    s->e = 0;
    s->d = 8;
    s->a = 0x3f800000u;
    s->c = 8;
}

extern char B_0115C8E0[];
void func_000F4988(void) {
    u32 a = (u32)B_0115C8E0;
    u32 *p = (u32 *)(u64)(a + 0x3020);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
}
