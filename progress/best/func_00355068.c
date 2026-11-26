extern u8 D_004CD538[];
extern u8 D_004CD4F0[];
extern u8 D_004CAF80[];

void func_000F4444(void *);

struct Obj {
    void *vtable;
    u32 unk4;
    void *p8;
    u32 unkC;
    void *p10;
    void *p14;
    void *p18;
};

void func_00355068(struct Obj *self) {
    self->vtable = D_004CD4F0;
    if (self->p8) func_000F4444(self->p8);
    if (self->p10) func_000F4444(self->p10);
    if (self->p14) func_000F4444(self->p14);
    if (self->p18) func_000F4444(self->p18);
    self->vtable = D_004CAF80;
}
