/* identical to func_0023DBA0 (matched), with its names changed by decompdecomp */
typedef struct SubObj SubObj;

typedef struct {
    void (*destructor)(SubObj *);
} SubVTable;

struct SubObj {
    SubVTable *vtable;
};

typedef struct MyClass {
    u8 pad[0x34];
    SubObj *f34;
    SubObj *f38;
} MyClass;

void func_0023E03C(void *self) __attribute__((noinline));
void func_0023E03C(void *self) {
    *(volatile int *)self = 0;
}

extern void func_0023CDDC(void *self);

void func_0023E518(MyClass *self) {
    if (self->f38 != NULL) {
        self->f38->vtable->destructor(self->f38);
        self->f38 = NULL;
    }
    if (self->f34 != NULL) {
        self->f34->vtable->destructor(self->f34);
        self->f34 = NULL;
    }
    func_0023E03C(self);
    func_0023CDDC(self);
}
