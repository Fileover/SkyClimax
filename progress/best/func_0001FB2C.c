struct Foo { u32 a; u32 b; };
void func_0001FB2C(struct Foo *p) {
    u32 a = p->a, b = p->b;
    u32 t0 = (a << 24);
    u32 t1 = (b << 24);
    u32 t2 = (a >> 24);
    u32 t3 = (a << 16) >> 24;
    u32 t4 = (b >> 24);
    u32 t5 = (b << 16) >> 24;
    u32 t6 = (a << 8) & 0xf0000;
    u32 t7 = (b << 8) & 0xf0000;
    p->a = t2 | t3 | t0 | t6;
    p->b = t4 | t5 | t1 | t7;
}
