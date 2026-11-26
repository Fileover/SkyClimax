extern u32 D_004D2B00[];
extern u32 D_004D29C0[];
extern void func_0006BC20(void *);

typedef struct {
    u8 pad[0x18];
    u8 field_18;
    u8 pad2[7];
    u32 field_20;
    u32 field_24;
} Obj;

void func_000ED94C(Obj *self) {
    self->field_24 = (u32)&D_004D29C0;
    self->field_20 = (u32)&D_004D2B00;
    func_0006BC20(self);
    self->field_18 = 0;
}
