typedef struct { u8 pad[0xc]; u32 f; u32 a; u32 b; u8 c; } S;
void func_000F490C(S *s) { s->f = 0x3f800000u; s->c = 0; s->b = 8; s->a = 8; }
