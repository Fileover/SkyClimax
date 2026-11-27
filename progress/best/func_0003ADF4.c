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
    if (flag != 0) *(u32 *)q &= ~1u;
    else *(u32 *)q |= 1u;
}

void func_0003AD3C(Obj *p, s32 idx, s32 flag) {
    u32 v, sub;
    if (p == 0) return;
    v = *(u32 *)(p->table + (idx << 5) + 0xc);
    if (v == 0) return;
    sub = *(u32 *)(v + 8);
    if (flag != 0) *(u32 *)sub |= 0x4000u;
    else *(u32 *)sub &= ~0x4000u;
}

u32 func_0003ADB4(Obj *p, s32 idx) {
    u32 r = 0;
    if (p == 0) return r;
    {
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
    if (flag != 0) {
        *(u32 *)(v + 0x10) = val;
        *(u32 *)v |= 1u << 16;
    } else {
        *(u32 *)v &= ~(1u << 16);
    }
}

void func_0003AE4C(u32 *p) {
    p[0] = __builtin_bswap32(p[0]);
    p[1] = __builtin_bswap32(p[1]);
    p[2] = __builtin_bswap32(p[2]);
}

void func_0003B0F4(u32 *p) {
    p[0] = __builtin_bswap32(p[0]);
    p[1] = __builtin_bswap32(p[1]);
    p[2] = __builtin_bswap32(p[2]);
}
