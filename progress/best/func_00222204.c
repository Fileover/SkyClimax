extern void *B_016D9E1C;

typedef struct MyObj MyObj;

typedef struct {
    void *pad[5];
    void (*method)(MyObj *, void *, void *);
} VTable;

struct MyObj {
    VTable *vtable;
};

MyObj *func_0022217C(void *a, s32 *b) __attribute__((noinline));
MyObj *func_0022217C(void *a, s32 *b) {
    *b = 0;
    return (MyObj *)a;
}

MyObj *func_00222204(void *arg0, void *arg1, s32 *arg2) {
    s32 local;
    *arg2 = 0;
    MyObj *obj = func_0022217C(arg0, &local);
    if (obj == NULL || local != 0) {
        *arg2 = -1;
        return NULL;
    }
    obj->vtable->method(obj, arg1, B_016D9E1C);
    return obj;
}
