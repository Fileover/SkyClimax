extern void *D_004CCAF0;
struct Mgr {
    char pad[8];
    u32 val;
};
extern struct Mgr *B_016DACDC;
void func_002AC0A0(void *, int, int);

struct Inner {
    void *vtable;
    char pad[0x244];
    u32 f250;
    u32 f254;
    u32 f258;
};

struct Outer {
    u32 a;
    u32 b;
    struct Inner inner;
    char pad_25c[4];
    u32 f260;
    u32 f264;
    u32 f268;
    u32 f26c;
    char buf[0x120];
    u32 f390;
    u32 f394;
    u32 f398;
    u32 f39c;
    u32 f3a0;
    u32 f3a4;
};

void func_0025589C(struct Outer *this, u32 a, u32 b) {
    struct Inner *inner;
    this->a = a;
    this->b = b;
    inner = &this->inner;
    inner->vtable = &D_004CCAF0;
    inner->f250 = 0;
    inner->f254 = 0;
    inner->f258 = 0;
    this->f260 = 0;
    this->f264 = 0;
    this->f268 = 0;
    this->f26c = 0;
    func_002AC0A0(this->buf, 0, 0x120);
    this->f394 = 0;
    this->f390 = 0;
    this->f398 = B_016DACDC->val;
    this->f39c = 0;
    this->f3a0 = 0;
    this->f3a4 = 1;
}
