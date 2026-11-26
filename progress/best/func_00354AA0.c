extern u32 D_004CD4F0[];
extern u32 D_004CAF80[];
extern void func_000F4444(void *);
extern void func_000F3ED0(u32);

typedef struct {
    u32 vtable;
    u32 pad4;
    u32 f8;
    u32 padc;
    u32 f10;
    u32 f14;
    u32 f18;
} Obj;

void func_00354AA0(Obj *self) {
    u32 id = (u32)(u64)self;
    self->vtable = (u32)(u64)D_004CD4F0;
    if (self->f8) func_000F4444((void *)(u64)self->f8);
    if (self->f10) func_000F4444((void *)(u64)self->f10);
    if (self->f14) func_000F4444((void *)(u64)self->f14);
    if (self->f18) func_000F4444((void *)(u64)self->f18);
    self->vtable = (u32)(u64)D_004CAF80;
    func_000F3ED0(id);
}
