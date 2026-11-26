extern u8 B_0115C8E0[];

typedef struct { u8 x[8]; u8 b; } T8;
u8 func_000F4780(int a) {
    s64 idx = (s64)(a + 0x3050);
    return ((T8 *)(B_0115C8E0 + idx))->b;
}

void func_000F4754(int a, u8 v) {
    s64 idx = (s64)(a + 0x3050);
    ((T8 *)(B_0115C8E0 + idx))->b = v;
}
