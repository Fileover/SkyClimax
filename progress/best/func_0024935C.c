extern char D_004CC5C0[];
extern void *func_002548A0(void);

typedef struct {
    u32 x, y, z;
} Vec3;

typedef struct {
    void *vptr;
    u32 b;
    u32 c;
    u32 f0c;
    Vec3 sub1;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    Vec3 sub2;
    Vec3 sub3;
    void *res;
} Obj;

void func_0024935C(Obj *self, u32 b, u32 c) {
    self->vptr = D_004CC5C0;
    self->c = c;
    self->sub1.x = 0;
    self->sub1.z = 0;
    self->sub1.y = 0;
    self->sub2.z = 0;
    self->sub2.x = 0;
    self->sub2.y = 0;
    self->sub3.z = 0;
    self->f0c = 0;
    self->f1c = 0;
    self->f20 = 0;
    self->f24 = 0;
    self->f28 = 0;
    self->sub3.x = 0;
    self->sub3.y = 0;
    self->b = b;
    self->res = func_002548A0();
}
