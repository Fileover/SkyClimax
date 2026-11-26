extern u8 D_004CD580[];
extern u8 D_004CAF80[];
extern void func_000F4444(void *);
extern void func_000F3ED0(void *);

typedef struct {
    void *vtable;
    u32 pad;
    void *p8;
    void *pc;
} Obj;

void func_003548E8(Obj *self) {
    self->vtable = D_004CD580;
    if (self->p8) func_000F4444(self->p8);
    if (self->pc) func_000F4444(self->pc);
    self->vtable = D_004CAF80;
    func_000F3ED0(self);
}
