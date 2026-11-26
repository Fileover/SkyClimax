/* identical to func_0034735C (matched), with its names changed by decompdecomp */
typedef struct {
    void *vptr;
    int a;
    int b;
} Base;

typedef union {
    Base base;
    void *vptr;
} Derived;

extern void *D_004CB7A0[];
void func_002F68B0(void *, int);

void func_0034741C(Derived *d) {
    d->vptr = NULL;
    d->base.vptr = D_004CB7A0;
    func_002F68B0(d, 12);
}
