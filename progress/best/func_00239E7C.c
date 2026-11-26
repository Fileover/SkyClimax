extern void *D_004CBCC8[];

typedef struct Param {
    f32 f0;
    u32 f4;
    u32 f8;
    u32 fc;
} Param;

typedef struct Obj {
    void *vtable;
    u32 f4;
    u32 f8;
    u32 fc;
    f32 f10;
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
} Obj;

volatile int stub;
__attribute__((noinline)) void func_00239E34(void *this) {
    stub = (int)(long)this;
}

void func_00239E7C(Obj *this, u32 arg1, const Param *param) {
    u32 p4, p8, pc;
    f32 p0;
    func_00239E34(this);
    this->f4 = arg1;
    this->vtable = D_004CBCC8;
    p4 = param->f4;
    this->f3c = 0;
    this->f14 = p4;
    p8 = param->f8;
    this->f8 = 0;
    this->f18 = p8;
    pc = param->fc;
    this->fc = 0;
    this->f20 = 0;
    this->f24 = 0;
    this->f28 = 0;
    this->f2c = 0;
    this->f30 = 0;
    this->f34 = 0;
    this->f38 = 0;
    p0 = param->f0;
    this->f10 = p0;
    this->f1c = pc;
}
