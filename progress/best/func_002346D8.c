extern void *D_004CBC78[];

typedef struct Src {
    u8 padA0[0xa0];
    s8 fA0;
    u8 pad388[0x388 - 0xa1];
    u32 f388;
    u32 f38c;
} Src;

typedef struct Obj {
    void *vtable;
    u32 f04;
    u32 f08;
    u32 f0c;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    s32 f44;
    u8 f48;
    u8 pad[0x83];
    u32 fcc;
} Obj;

void func_002346D8(Obj *self, u32 a1, u32 a2, const Src * __restrict src, u32 a4, u32 a5, u32 a6, u32 a7) {
    void *vt = D_004CBC78;
    u32 zero = 0;
    u32 *p = (u32 *)self;
    *(++p) = zero;
    p[2] = zero;
    p[1] = zero;
    self->vtable = vt;

    u32 *q = &self->f34;

    u32 f388 = src->f388;
    u32 f38c = src->f38c;

    q[0] = zero;
    q[1] = zero;
    self->f24 = a4;
    self->f28 = a5;
    self->f2c = a6;
    self->f30 = a7;
    self->f1c = zero;
    q[2] = zero;
    self->f20 = zero;
    self->f10 = a1;
    self->f14 = a2;
    self->f40 = f388;
    self->f18 = f38c;

    self->f44 = src->fA0;
    self->fcc = zero;
    self->f48 = (u8)zero;
}
