extern void *D_004CB5F0[];

typedef struct Derived {
    void *vtable;
    s32 b;
    s32 c;
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
    u8 f44;
    u8 pad[0xff];
    u32 f144;
    u32 f148;
    u32 f14c;
    u32 f150;
} Derived;

volatile int stub;
__attribute__((noinline)) void func_00229070(void *self, s32 b) {
    stub = (int)(long)self;
}

void func_002290A0(Derived * __restrict self, s32 b) {
    func_00229070(self, b);
    self->vtable = D_004CB5F0;
    self->f0c = 0;
    self->f10 = 0;
    self->f14 = 0;
    self->f18 = 0;
    self->f1c = 0;
    self->f20 = 0;
    self->f24 = 0;
    self->f28 = 0;
    self->f2c = 0;
    self->f30 = 0;
    self->f34 = 0;
    self->f38 = 0;
    self->f3c = 0;
    self->f40 = 0;
    self->f144 = 0;
    self->f148 = 0;
    self->f14c = 0;
    self->f150 = 0;
    self->f44 = 0;
}
