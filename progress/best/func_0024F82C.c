extern u32 D_004CC7F0[];

typedef struct {
    u8 pad[0x20];
    u32 a;
    u32 b;
} Param;

typedef struct {
    u32 vptr;
    u8 pad[0x3c];
    u32 field_40;
    u32 field_44;
} Obj;

static volatile int s_stub;
__attribute__((noinline)) void func_0024F6AC(void *this, const void *param) {
    s_stub = (int)(long)this + (int)(long)param;
}

void func_0024F82C(Obj *__restrict this, const Param *__restrict param) {
    func_0024F6AC(this, param);
    this->vptr = (u32)&D_004CC7F0;
    this->field_40 = param->a;
    this->field_44 = param->b;
}
