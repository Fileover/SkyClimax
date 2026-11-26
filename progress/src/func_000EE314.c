/* identical to func_000EE1EC (matched), with its names changed by decompdecomp */
extern u8 func_000D390C(void *);

typedef struct {
    u8 pad[4];
    u32 field_4;
    u8 pad2[12];
    u8 field_14;
} Obj;

void func_000EE314(Obj *self) {
    if (!func_000D390C(self)) {
        self->field_14 = 0;
        self->field_4 = 5;
    }
}
