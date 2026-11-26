typedef struct Object Object;
typedef void (*Method)(Object *);

struct Object {
    Method *vtable;
};

struct Container {
    char pad[0x18];
    Object *obj;
};

void func_000D0A90(struct Container *p) {
    Object *obj = p->obj;
    if (obj != 0) {
        obj->vtable[4](obj);
    }
}
