extern void *D_004CC038[];

typedef struct {
    u8 pad10[0x10];
    u32 f10;
    u8 pad20[0x10];
    u32 f24;
} Param;

typedef struct Base2 {
    void *vtable;
} Base2;

typedef struct Derived {
    void *vtable;
    Base2 base2;
    u8 pad[0x38];
    u32 f44;
    u32 f48;
    u32 f4c;
    u32 f50;
    u32 f54;
    Param *f58;
} Derived;

volatile int stub;
void func_0023BF74(Derived *self) __attribute__((noinline));
void func_0023BF74(Derived *self) {
    stub = (int)(long)self;
}

extern void func_0023A128(Base2 *, u32, Param *);

void func_0023BFD8(Derived *self, u32 arg1, Param *arg2) {
    Base2 *b2 = &self->base2;
    func_0023BF74(self);
    func_0023A128(b2, arg1, arg2);

    self->f58 = arg2;
    self->vtable = D_004CC038;
    self->base2.vtable = (char *)D_004CC038 + 0x64;

    self->f4c = 0;
    self->f50 = arg2->f24;
    self->f44 = 0;
    self->f54 = arg2->f10;
    self->f48 = 0;
}
