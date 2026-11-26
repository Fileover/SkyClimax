struct SubA {
    u32 a;
    u32 b;
};

struct SubB {
    u32 a;
    u32 b;
};

struct SubC {
    u32 a;
    u32 b;
    u32 c;
    u64 d;
    u32 e;
};

struct MainObj {
    char pad_0[0x30];
    u32 field_30;
    struct SubA subA;
    char pad_3c[0xC];
    struct SubB subB;
    struct SubC subC;
    char pad_6c[0x24];
    u32 field_90;
    char pad_94[0x3C];
    u32 field_d0;
    u32 field_d4;
    u32 field_d8;
};

extern const u8 D_00559610[];

void func_002DB880(struct MainObj *this, u32 val) {
    this->field_30 = 0;
    this->subA.a = 0;
    this->subA.b = 0;
    this->subB.a = 0;
    this->subB.b = 0;
    this->subC.a = 0;
    this->subC.b = 0;
    this->subC.c = 0;
    this->subC.d = 0;
    this->subC.e = 0;
    this->field_90 = 0;
    this->field_d0 = 0;
    this->field_d4 = 0x46494F53;
    this->field_d8 = 0x6F626A20;
    if (D_00559610[12] == 0) {
        this->subA.a = val;
    }
}
