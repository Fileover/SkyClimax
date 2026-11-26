/* identical to func_00229070 (matched), with its names changed by decompdecomp */
extern char D_004CCAA8[];

struct Base {
    void *vtable;
    s32 b;
    s32 c;
};

void func_00254A84(struct Base *self, s32 b) {
    self->vtable = D_004CCAA8;
    self->b = b;
    self->c = 0;
}
