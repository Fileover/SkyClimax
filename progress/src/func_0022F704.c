typedef struct CriInterface CriInterface;

struct CriInterfaceVtbl {
    void *funcs[7];
    u32 (*get_id)(CriInterface *);
};

struct CriInterface {
    struct CriInterfaceVtbl *vtbl;
};

typedef struct {
    char pad[0x14];
    CriInterface *obj;
} CriThing;

u32 func_0022F704(CriThing *thing, int *err) {
    CriInterface *obj = thing->obj;
    u32 ret = 0;

    *err = 0;
    if (obj != NULL) {
        ret = obj->vtbl->get_id(obj);
    }
    return ret;
}
