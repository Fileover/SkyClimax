extern u8 func_0006BC24(void *);

typedef struct {
    u8 pad[4];
    u32 field_4;
    u8 pad2[12];
    u8 field_14;
} Obj;

void func_000EE1EC(Obj *self) {
    if (!func_0006BC24(self)) {
        self->field_14 = 0;
        self->field_4 = 5;
    }
}
