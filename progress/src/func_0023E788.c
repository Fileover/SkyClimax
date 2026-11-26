extern void *D_004CC2C8[];
void func_0023D194(void *this, const void *param);

typedef struct Param {
    u8 pad[0x28];
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
} Param;

typedef struct Obj {
    void *vtable;
    u8 pad4[0x2c];
    void *vtable2;
    u8 pad34[0x2c];
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6c;
    u32 f70;
    u32 f74;
    u32 f78;
    u32 f7c;
} Obj;

void func_0023E788(Obj * __restrict this, const Param * __restrict param) {
    func_0023D194(this, param);
    void *vt = D_004CC2C8;
    this->vtable = vt;
    this->vtable2 = (void *)((u8 *)vt + 0x30);
    this->f60 = param->f28;
    this->f64 = 0;
    this->f68 = 0;
    this->f6c = 0;
    this->f70 = 0;
    this->f74 = param->f2c;
    this->f78 = param->f30;
    this->f7c = param->f34;
}
