extern char D_004CBCC8[];

typedef struct {
    f32 f0;
    u32 u4;
    u32 u8;
    u32 uC;
} Param;

typedef struct {
    void *vtable;
    u32 arg1;
    u32 f8;
    u32 fC;
    Param p;
    u32 z20;
    u32 z24;
    u32 z28;
    u32 z2C;
    u32 z30;
    u32 z34;
    u32 z38;
    u32 z3C;
} Obj;

volatile int stub;
__attribute__((noinline)) void func_00239E34(void *self) { stub = (int)(long)self; }

void func_0023A128(Obj * __restrict self, u32 arg1, const Param * __restrict param) {
    func_00239E34(self);
    self->vtable = (void *)D_004CBCC8;
    self->arg1 = arg1;
    self->f8 = 0;
    self->fC = 0;
    self->p.f0 = param->f0;
    self->p.u4 = param->u4;
    self->p.u8 = param->u8;
    self->p.uC = param->uC;
    self->z20 = 0;
    self->z24 = 0;
    self->z28 = 0;
    self->z2C = 0;
    self->z30 = 0;
    self->z34 = 0;
    self->z38 = 0;
    self->z3C = 0;
}
