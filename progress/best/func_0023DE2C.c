extern void *D_004CC278[];
void func_0023D194(void *this, void *param);

typedef struct {
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
} Obj;

void func_0023DE2C(Obj * __restrict this, void *param) {
    func_0023D194(this, param);
    void *vt = D_004CC278;
    this->vtable = vt;
    this->vtable2 = (void *)((u8 *)vt + 0x30);
    this->f60 = 0;
    this->f64 = 0;
    this->f68 = 0;
    this->f6c = 0;
    this->f70 = 0;
    this->f74 = 0;
    this->f78 = 0;
}
