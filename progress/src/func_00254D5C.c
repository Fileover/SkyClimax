typedef struct CriInterface CriInterface;

struct CriInterfaceVtbl {
    void *funcs[9];
    u32 (*method)(CriInterface *, u32);
};

struct CriInterface {
    struct CriInterfaceVtbl *vtbl;
};

typedef struct {
    char pad[0x30];
    CriInterface *obj;
} CriThing;

u32 func_00254D5C(CriThing *thing, u32 arg) {
    CriInterface *obj = thing->obj;
    u32 ret = 0;

    if (obj != NULL) {
        ret = obj->vtbl->method(obj, arg);
    }
    return ret;
}
