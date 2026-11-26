extern u32 D_004CC6C0[];
void func_00249BD4(void *, u32, u32, u32);

typedef struct {
    u32 vptr;
    u8 pad[0x50];
    u32 field_54;
} Obj;

void func_0024BCA8(Obj *this, u32 a2, u32 a3, u32 a4, u32 a5) {
    func_00249BD4(this, a2, a3, a4);
    this->field_54 = a5;
    this->vptr = (u32)&D_004CC6C0;
}
