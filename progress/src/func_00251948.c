/* identical to func_0023466C (matched), with its names changed by decompdecomp */
typedef struct Object Object;

typedef struct VTable {
    void (*f0)(void);
    void (*f1)(void);
    void (*f2)(void);
    void (*f3)(void);
    void (*fn_10)(Object *);
    void (*f5)(void);
    void (*fn_18)(Object *);
} VTable;

struct Object {
    VTable *vtable;
};

void func_00251948(Object *obj) {
    obj->vtable->fn_18(obj);
    obj->vtable->fn_10(obj);
}
