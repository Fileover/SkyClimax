extern char D_004CC900[];

struct Sub {
    s32 x, y, z;
};

struct Obj {
    void *vtable;
    s32 b;
    struct Sub sub;
    s32 f14;
    u8 pad18[0x60 - 0x18];
    s32 f60;
    u8 pad64[0xF4 - 0x64];
    s32 fF4;
};

void func_00250DA8(struct Obj *self, s32 b) {
    self->vtable = D_004CC900;
    self->fF4 = 0;
    self->b = b;
    self->sub = (struct Sub){0, 0, 0};
    self->f14 = 0;
    self->f60 = 0;
}
