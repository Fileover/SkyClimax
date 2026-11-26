typedef struct Base Base;
typedef struct {
    void (*vfunc0)(Base *);
} Vtable;

struct Base {
    Vtable *vtable;
};

void func_00234AAC(void *unused, Base *p) {
    if (p != NULL) {
        p->vtable->vfunc0(p);
    }
}
