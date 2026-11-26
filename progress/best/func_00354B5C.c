extern u8 D_004CD4F0[];
extern u8 D_004CAF80[];
extern void func_000F4444(void *);

typedef struct {
    u32 vtable;
    u32 pad4;
    u32 f8;
    u32 padc;
    u32 f10;
    u32 f14;
    u32 f18;
} Obj;

void func_00354B5C(Obj *self) {
    self->vtable = (u32)(u64)D_004CD4F0;
    if (self->f8) func_000F4444((void *)(u64)self->f8);
    if (self->f10) func_000F4444((void *)(u64)self->f10);
    if (self->f14) func_000F4444((void *)(u64)self->f14);
    if (self->f18) func_000F4444((void *)(u64)self->f18);
    self->vtable = (u32)(u64)D_004CAF80;
}
