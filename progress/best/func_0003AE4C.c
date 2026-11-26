typedef struct {
    u8 pad0[0x1550];
    s32 count;
    u32 table;
} Obj;

void func_0003ACC0(Obj *p, s32 idx, s32 flag) {
    u32 q;
    if ((u32)p == 0) return;
    if (idx < 0) return;
    if (p->count <= idx) return;
    q = p->table + (idx << 5);
    if (flag != 0) *(u32 *)q &= ~1u;
    else *(u32 *)q |= 1u;
}

u32 func_0003ADB4(Obj *p, s32 idx) {
    u32 r = 0;
    u32 v;
    if (p == 0) return r;
    v = *(u32 *)(p->table + (idx << 5) + 0xc);
    if (v == 0) return r;
    r = *(u32 *)(v + 0xc);
    return r;
}

void func_0003AE4C(u32 *restrict p) {
    u32 a = p[0], b = p[1], c = p[2];
    u32 ra = (a >> 24) | ((a >> 8) & 0xff00) | ((a << 8) & 0xff0000) | (a << 24);
    u32 rb = (b >> 24) | ((b >> 8) & 0xff00) | ((b << 8) & 0xff0000) | (b << 24);
    u32 rc = (c >> 24) | ((c >> 8) & 0xff00) | ((c << 8) & 0xff0000) | (c << 24);
    p[0] = ra; p[1] = rb; p[2] = rc;
}

void func_0003B0F4(u32 *restrict p) {
    u32 a = p[0], b = p[1], c = p[2];
    u32 ra = (a >> 24) | ((a >> 8) & 0xff00) | ((a << 8) & 0xff0000) | (a << 24);
    u32 rb = (b >> 24) | ((b >> 8) & 0xff00) | ((b << 8) & 0xff0000) | (b << 24);
    u32 rc = (c >> 24) | ((c >> 8) & 0xff00) | ((c << 8) & 0xff0000) | (c << 24);
    p[0] = ra; p[1] = rb; p[2] = rc;
}
