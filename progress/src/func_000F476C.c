extern u8 B_0115C8E0[];

u8 func_000F4798(int a) {
    return B_0115C8E0[a + 0x3060];
}

void func_000F476C(int a, u8 v) {
    B_0115C8E0[a + 0x3060] = v;
}

typedef struct { u8 x[8]; u8 b; } T8;
u8 func_000F4780(int a) {
    T8 *p = (T8 *)((u8 *)(u32)B_0115C8E0 + (a + 0x3050));
    return p->b;
}

void func_000F4754(int a, u8 v) {
    T8 *p = (T8 *)((u8 *)(u32)B_0115C8E0 + (a + 0x3050));
    p->b = v;
}

void *func_000F46FC(u32 *a) {
    u32 base = (u32)B_0115C8E0;
    if (a) {
        a[0] = *(u32 *)(base + 0x303c);
        a[1] = *(u32 *)(base + 0x3040);
        a[2] = *(u32 *)(base + 0x3044);
        a[3] = *(u32 *)(base + 0x3048);
        a[4] = *(u32 *)(base + 0x304c);
        a[5] = *(u32 *)(base + 0x3050);
        a[6] = *(u32 *)(base + 0x3054);
    }
    return (void *)(base + 0x303c);
}

typedef struct { u8 pad[8]; u8 b; u8 pad2[3]; u32 a; u32 c; u32 d; u32 e; u32 f; u32 g; } S48AC;
void func_000F48AC(S48AC *s) {
    s->b = 0;
    s->a = 0;
    s->c = 0;
    s->d = 0;
    s->e = 0;
    s->f = 0;
    s->g = 0x3f800000u;
}
