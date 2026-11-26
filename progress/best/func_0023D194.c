extern void *D_004CC1E0[];
void func_0025D7EC(void *this, u32 a, u32 b, u32 c, u32 d, u32 e);

typedef struct Param {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
} Param;

typedef struct Obj {
    void *vtable;
    u8 pad4[0x2c];
    void *vtable2;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4c;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5c;
} Obj;

void func_0023D194(Obj * __restrict this, const Param * __restrict param) {
    func_0025D7EC(this, param->f0, param->f4, param->f8, param->f10, 2);
    void *vt = D_004CC1E0;
    this->vtable = vt;
    this->vtable2 = (void *)((u8 *)vt + 0x2c);
    this->f3c = param->f8;
    this->f40 = param->f10;
    this->f44 = 48000;
    this->f34 = 0;
    this->f38 = 0;
    this->f48 = 0;
    this->f4c = 0;
    this->f50 = 0;
    this->f54 = 0;
    this->f58 = 0;
    this->f5c = 0;
}
