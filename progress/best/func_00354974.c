extern void *D_004CD580;
extern void *D_004CAF80;
void func_000F4444(u32);

typedef struct {
    u32 vtable;
    u32 pad4;
    u32 field_8;
    u32 field_c;
} Obj354974;

void func_00354974(Obj354974 *this) {
    this->vtable = (u32)&D_004CD580;
    switch (this->field_8) {
    case 0: break;
    default:
        func_000F4444(this->field_8);
        break;
    }
    switch (this->field_c) {
    case 0: break;
    default:
        func_000F4444(this->field_c);
        break;
    }
    this->vtable = (u32)&D_004CAF80;
}
