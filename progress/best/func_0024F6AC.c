extern u32 D_004CC810[];

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
    f32 fc;
    u32 pad10;
    u32 f14;
    u32 pad18;
    u32 f1c;
} Param;

typedef struct {
    u32 vptr;
    u32 vec[3];
    u32 a;
    u32 b;
    u32 c;
    f32 d;
    u32 zeros[6];
    u32 e;
    u32 f;
} Base;

void func_0024F6AC(Base *this, const Param *param) {
    this->vptr = (u32)&D_004CC810;
    this->vec[0] = 0;
    this->vec[1] = 0;
    this->vec[2] = 0;
    this->a = param->f0;
    this->b = param->f4;
    this->c = param->f8;
    this->d = param->fc;
    this->zeros[0] = 0;
    this->zeros[1] = 0;
    this->zeros[2] = 0;
    this->zeros[3] = 0;
    this->zeros[4] = 0;
    this->zeros[5] = 0;
    this->e = param->f14;
    this->f = param->f1c;
}
