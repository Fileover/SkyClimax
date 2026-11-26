/* identical to func_00234AAC (matched), with its names changed by decompdecomp */
typedef struct Base Base;
typedef struct {
    void (*vfunc0)(Base *);
} Vtable;

struct Base {
    Vtable *vtable;
};

void func_00248FBC(void *unused, Base *p) {
    if (p != NULL) {
        p->vtable->vfunc0(p);
    }
}
