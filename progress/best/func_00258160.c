extern char D_004CCB08[];

volatile int stub;
__attribute__((noinline)) void func_00257D8C(void *p) { stub = (u32)(u64)p; }

typedef struct {
    u32 x;
    u32 y;
    u32 z;
} Vec3;

typedef struct {
    void *vptr;
    char pad[0x780];
    u16 f784;
    u16 f786;
    Vec3 f788;
    Vec3 f794;
    s32 f7a0;
    u32 f7a4;
    u32 f7a8;
    s32 f7ac;
} Obj;

void func_00258160(Obj *self) {
    Obj *p29 = self;
    func_00257D8C(self);
    Vec3 *q = &self->f794;
    self->vptr = D_004CCB08;
    Vec3 *p = (Vec3 *)((char *)p29 + 0x788);
    p->x = 0;
    p->z = 0;
    q->z = 0;
    self->f7ac = 1;
    p->y = 0;
    self->f786 = 0;
    self->f7a0 = -1;
    self->f7a8 = 0;
    self->f784 = 0;
    self->f7a4 = 0;
    q->x = 0;
    q->y = 0;
}
