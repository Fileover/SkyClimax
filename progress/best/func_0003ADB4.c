typedef struct {
    u8 pad0[0x1550];
    s32 count;
    u32 table;
} Obj;

void func_0003ACC0(Obj *p, s32 idx, s32 flag) {
    u32 q;
    if (p == 0) return;
    if (idx < 0) return;
    if (p->count <= idx) return;
    q = p->table + (idx << 5);
    if (flag == 0) *(u32 *)q |= 1;
    else *(u32 *)q &= ~1u;
}

void func_0003AD3C(Obj *p, s32 idx, s32 flag) {
    u32 v, sub;
    if (p == 0) return;
    v = *(u32 *)(p->table + (idx << 5) + 0xc);
    if (v == 0) return;
    sub = *(u32 *)(v + 8);
    if (flag == 0) *(u32 *)sub &= ~0x8000u;
    else *(u32 *)sub |= 0x4000u;
}

u32 func_0003ADB4(Obj *p, s32 idx) {
    u32 r = 0;
    if (p != 0) {
        u32 v = *(u32 *)(p->table + (idx << 5) + 0xc);
        if (v != 0) r = *(u32 *)(v + 0xc);
    }
    return r;
}

void func_0003ADF4(Obj *p, s32 idx, s32 flag, u32 val) {
    u32 v;
    if (p == 0) return;
    v = *(u32 *)(p->table + (idx << 5) + 0xc);
    if (v == 0) return;
    if (flag == 0) *(u32 *)v &= ~(1u << 17);
    else {
        *(u32 *)(v + 0x10) = val;
        *(u32 *)v |= 1u << 16;
    }
}

void func_0003AE4C(u32 *p) {
    u32 a = p[0], b = p[1], c = p[2];
    p[0] = (a >> 24) | ((a >> 8) & 0xff0000) | ((a << 8) & 0xff00) | (a << 24);
    p[1] = (b >> 24) | ((b >> 8) & 0xff0000) | ((b << 8) & 0xff00) | (b << 24);
    p[2] = (c >> 24) | ((c >> 8) & 0xff0000) | ((c << 8) & 0xff00) | (c << 24);
}

void func_0003B0F4(u32 *p) {
    u32 a = p[0], b = p[1], c = p[2];
    p[0] = (a >> 24) | ((a >> 8) & 0xff0000) | ((a << 8) & 0xff00) | (a << 24);
    p[1] = (b >> 24) | ((b >> 8) & 0xff0000) | ((b << 8) & 0xff00) | (b << 24);
    p[2] = (c >> 24) | ((c >> 8) & 0xff0000) | ((c << 8) & 0xff00) | (c << 24);
}
