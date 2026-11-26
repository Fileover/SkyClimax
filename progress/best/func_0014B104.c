typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u8 pad[0x48];
    u8 field_54;
} Ctx;

volatile int dummy;

__attribute__((noinline)) void func_0014A900(u32 p) { dummy = 1; }
__attribute__((noinline)) void func_0014A304(u32 p) { dummy = 2; }
__attribute__((noinline)) void func_0014A5C4(void) { dummy = 3; }

void func_0014B104(u32 p, u32 arg) {
    Ctx *c = (Ctx *)p;
    u32 state = c->field_0;
    if (state == 1) {
        switch (c->field_8) {
        case 0:
        case 4:
        case 5:
        case 6:
            break;
        default:
            c->field_54 = (u8)state;
            return;
        }
    }
    func_0014A900((u32)(u64)p);
    func_0014A304((u32)(u64)p);
    if (arg != 0) {
        func_0014A5C4();
    }
}
