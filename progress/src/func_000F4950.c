typedef struct { u8 pad[0xc]; f32 f0c; f32 f10; u32 f14; u32 f18; u8 f1c; } S48D8;
void func_000F48D8(S48D8 *s) {
    s->f10 = 1.0f;
    s->f1c = 0;
    s->f18 = 8;
    s->f0c = 1.0f;
    s->f14 = 8;
}

extern char B_0115C8E0[];
extern void func_002AC0A0(void *, int, int);
void func_000F4950(void) {
    u64 addr = (u32)B_0115C8E0;
    func_002AC0A0((void *)(addr + 0x2b5c6c), 0, 0x280);
}

void func_000F4988(void) {
    u32 a = (u32)B_0115C8E0;
    u32 *p = (u32 *)(u64)(a + 0x3020);
    p[6] = 0;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
}
