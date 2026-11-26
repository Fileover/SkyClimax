typedef struct {
    u8 pad[0x80];
    vu32 f0x80;
    vu32 f0x84;
} Obj_0028F038;

void func_0028F038(Obj_0028F038 *s, u32 a, u32 b) {
    s->f0x84 = b;
    s->f0x80 = a;
}
