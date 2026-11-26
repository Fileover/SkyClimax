/* identical to func_0024B5C4 (matched), with its names changed by decompdecomp */
extern u32 D_004CC670[];
void func_00249C5C(void *, u32, u32);

typedef struct {
    u32 vptr;
    u8 pad[0x44];
    u32 field_48;
} Obj;

void func_0024B60C(Obj *this, u32 a2, u32 a3, u32 a4) {
    func_00249C5C(this, a2, a3);
    this->field_48 = a4;
    this->vptr = (u32)&D_004CC670;
}
