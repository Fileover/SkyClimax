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

void func_0023466C(Object *obj) {
    obj->vtable->fn_18(obj);
    obj->vtable->fn_10(obj);
}
