extern void *D_004CC7D0;

typedef struct {
    u8 pad[0x20];
    f32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
} Param;

typedef struct {
    void *vptr;
    u8 pad[0x3c];
    u32 f40;
    u32 f44;
    u32 f48;
    f32 f4c;
} Obj;

static volatile int s_stub;
__attribute__((noinline)) void func_0024F6AC(void *this, const void *param) {
    s_stub = (int)(u32)this + (int)(u32)param;
}

void func_0024F8CC(Obj * __restrict this, const Param * __restrict param) {
    u32 b;
    u32 a;
    u32 c;
    f32 f;

    func_0024F6AC(this, param);
    this->vptr = &D_004CC7D0;

    b = param->f28;
    a = param->f24;
    this->f44 = b;
    c = param->f2c;
    this->f40 = a;
    f = param->f20;
    this->f4c = f;
    this->f48 = c;
}
