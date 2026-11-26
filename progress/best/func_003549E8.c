extern void *D_004CD538;
extern void *D_004CD4F0;
extern void *D_004CAF80;

void func_000F4444(void *);
void func_000F3ED0(void *);

struct Obj {
    void *vtable;
    u32 unk4;
    void *p8;
    u32 unkC;
    void *p10;
    void *p14;
    void *p18;
};

void func_003549E8(struct Obj *self) {
    *(volatile void **)&self->vtable = &D_004CD538;
    self->vtable = &D_004CD4F0;
    if (self->p8) func_000F4444(self->p8);
    if (self->p10) func_000F4444(self->p10);
    if (self->p14) func_000F4444(self->p14);
    if (self->p18) func_000F4444(self->p18);
    self->vtable = &D_004CAF80;
    func_000F3ED0(self);
}
