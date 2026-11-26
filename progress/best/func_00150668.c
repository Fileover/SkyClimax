extern char STR_003E94C8[];
extern void *D_004CA940[];

volatile int stub;
__attribute__((noinline)) void func_00150148(void *a, const char *b) {
    stub = 1;
}

typedef struct {
    void *vtable;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    u8 f20;
    u8 f21;
    u8 f22;
} Obj;

void func_00150668(Obj *s) {
    s->vtable = D_004CA940;
    s->f22 = 0;
    s->f21 = 0;
    s->f4 = 1;
    s->f8 = 0;
    s->fc = 0;
    s->f10 = 0;
    s->f14 = 0;
    s->f18 = 0;
    s->f1c = 0;
    s->f20 = 0;
    func_00150148(s, STR_003E94C8);
}
