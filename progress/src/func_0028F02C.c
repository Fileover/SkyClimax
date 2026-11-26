typedef struct {
    u8 pad[0x78];
    vu32 f0x78;
    vu32 f0x7c;
} Obj_0028F02C;

void func_0028F02C(Obj_0028F02C *s, u32 a, u32 b) {
    s->f0x7c = b;
    s->f0x78 = a;
}
