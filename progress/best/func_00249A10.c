extern char D_004CC610[];
extern void func_00261D84(void *, u32, u32, u32);

typedef struct {
    u32 f0;
    u32 f1;
    u32 f2;
} Sub;

typedef struct {
    void *vptr;
    char pad[0x24];
    Sub sub;
    u32 arr[7];
    u32 d;
} Obj;

void func_00249A10(Obj *self, u32 b, u32 c, u32 d) {
    Sub *sub = &self->sub;
    func_00261D84(self, b, c, 1);
    sub->f0 = 0;
    sub->f2 = 0;
    sub->f1 = 0;
    self->vptr = D_004CC610;
    self->arr[6] = 0;
    self->arr[0] = 0;
    self->arr[1] = 0;
    self->arr[2] = 0;
    self->arr[3] = 0;
    self->arr[4] = 0;
    self->arr[5] = 0;
    self->d = d;
}
