void *func_002AC0A0(void *, int, unsigned long);

typedef struct {
    unsigned int f0;
    unsigned int f4;
    int f8;
    unsigned char padc[0x18];
    unsigned int f24;
    unsigned int f28;
    unsigned char pad2c[0x64];
} Obj1;

typedef struct {
    unsigned int f0;
    unsigned char pad4[8];
    unsigned int fc;
    unsigned int f10;
    unsigned int f14;
    unsigned int f18;
} Obj2;

typedef struct {
    Obj1 obj1;
    Obj2 obj2;
} Combined;

Combined *func_001A6010(Combined *ptr) {
    if (!ptr)
        return ptr;

    func_002AC0A0(ptr, 0, sizeof(Combined));
    ptr->obj1.f0 = 0;
    ptr->obj1.f24 = 0x3f800000;
    ptr->obj1.f28 = 0x3f800000;
    ptr->obj2.fc = 0x40400000;
    ptr->obj2.f10 = 0;
    ptr->obj1.f8 = -1;
    ptr->obj2.f14 = 0;
    ptr->obj2.f0 = 0;
    return ptr;
}
