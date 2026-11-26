typedef struct {
    u8 pad[0x88];
    u32 flags;
} Obj;

volatile int stub;
__attribute__((noinline)) u8 func_00088480(void *arg) { stub = 0; return 0; }

s32 func_00088D20(Obj *this) {
    if ((this->flags & 8) != 0) {
        return 1;
    }
    return func_00088480(this);
}
