/* identical to func_002706F8 (matched), with its names changed by decompdecomp */
extern const char STR_00463A68[];
extern void func_002926D4(const char *);
extern s32 func_0026ABE4(void *);

typedef struct {
    u8 pad0;
    s8 state;
    u8 pad2[2];
    void *handle;
} Obj;

s32 func_00271280(Obj *obj) {
    s32 ret = 0;
    if (__builtin_expect(obj == NULL, 0)) {
        func_002926D4(STR_00463A68);
        return -1;
    }
    if (obj->state > 1) {
        ret = func_0026ABE4(obj->handle);
    }
    return ret;
}
