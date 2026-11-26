extern char D_004CB6A8[];

struct Base {
    void *vtable;
    s32 b;
    s32 c;
};

void func_00229070(struct Base *self, s32 b) {
    self->vtable = D_004CB6A8;
    self->b = b;
    self->c = 0;
}
