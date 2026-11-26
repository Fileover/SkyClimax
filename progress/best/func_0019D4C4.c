extern const void *D_004CAB08;

extern volatile int D_dummy;
static void __attribute__((noinline)) func_0019D0AC(void *self) {
    D_dummy = 1;
}

void func_000C3950(void *);

typedef struct {
    const void *vtable;
    u8 pad4[4];
    u8 m1[0x48];
    u8 m2[0x48];
    u8 m3[0x27c - 0x98];
    u8 m4[1];
} Class_0019D4C4;

void func_0019D4C4(Class_0019D4C4 *self) {
    self->vtable = &D_004CAB08;
    func_0019D0AC(self);
    func_000C3950((char *)self + 0x27c);
    func_000C3950((char *)self + 0x98);
    func_000C3950((char *)self + 0x50);
    func_000C3950((char *)self + 0x08);
}
