extern u8 B_0115C8E0[];

u8 func_000F4780(int a) {
    u8 *p = &B_0115C8E0[a + 0x3050];
    return p[8];
}

void func_000F4754(int a, u8 v) {
    u8 *p = &B_0115C8E0[a + 0x3050];
    p[8] = v;
}

typedef struct {
    u8 pad[0x303c];
    u32 f0, f1, f2, f3, f4, f5, f6;
} Big;
void *func_000F46FC(u32 *a) {
    Big *p = (Big *)B_0115C8E0;
    if (a) {
        a[0] = p->f0;
        a[1] = p->f1;
        a[2] = p->f2;
        a[3] = p->f3;
        a[4] = p->f4;
        a[5] = p->f5;
        a[6] = p->f6;
    }
    return &p->f0;
}

typedef struct { u8 pad[8]; u8 b; u8 pad2[3]; u32 a; u32 c; u32 d; u32 e; u32 f; u32 g; } S48AC;
void func_000F48AC(S48AC *s) {
    s->g = 0x3f800000u;
    s->f = 0;
    s->a = 0;
    s->c = 0;
    s->d = 0;
    s->e = 0;
    s->b = 0;
}
