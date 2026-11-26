/* identical to func_003298C0 (matched), with its names changed by decompdecomp */
typedef struct MyObj MyObj;

typedef struct {
    void *pad[4];
    s32 (*method_4)(MyObj *, s32);
} VTable;

struct MyObj {
    VTable *vtable;
    u8 pad[0x68];
    void *f6c;
};

extern s32 func_002A0844(void *);

s32 func_00350640(MyObj *this) {
    if (this->f6c != NULL) {
        if (__builtin_expect(this->vtable->method_4(this, -1) != -1, 0)) {
            if (func_002A0844(this->f6c) >= 0) {
                return 0;
            }
            return -1;
        }
    }
    return 0;
}
