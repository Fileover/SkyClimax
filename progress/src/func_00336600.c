extern void *D_004CAF80;
extern void *D_004CB258;
void func_000F4444(u32);

typedef struct {
    u32 vtable;
    u32 pad4;
    u32 p8;
    u32 pC;
    u32 p10;
    u32 p14;
} Obj336600;

void func_00336600(Obj336600 *this) {
    this->vtable = (u32)&D_004CB258;
    switch (this->p8) {
    case 0: break;
    default:
        func_000F4444(this->p8);
        break;
    }
    switch (this->p10) {
    case 0: break;
    default:
        func_000F4444(this->p10);
        break;
    }
    switch (this->p14) {
    case 0: break;
    default:
        func_000F4444(this->p14);
        break;
    }
    this->vtable = (u32)&D_004CAF80;
}
