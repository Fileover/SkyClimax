extern char D_0046B9C0[];

typedef struct {
    char pad0[8];
    u32 name;
    char pad1[0x14];
    u64 field_20;
} Obj;

volatile int stub;
__attribute__((noinline)) void func_002E9954(const char *fmt, ...) { stub = (int)(long)fmt; }

void func_002D021C(void *);

void func_002E9D8C(Obj *self) {
    if (__builtin_expect(self->field_20 != 0, 0)) {
        func_002E9954(D_0046B9C0, self->name);
        self->field_20 = 0;
    }
    func_002D021C(self);
}
