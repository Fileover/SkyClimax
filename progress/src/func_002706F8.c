extern const char STR_004638B0[];
extern void func_002926D4(const char *);
extern s32 func_0026ABB8(void *);

typedef struct {
    u8 pad0;
    s8 state;
    u8 pad2[2];
    void *handle;
} Obj;

s32 func_002706F8(Obj *obj) {
    s32 ret = 0;
    if (__builtin_expect(obj == NULL, 0)) {
        func_002926D4(STR_004638B0);
        return -1;
    }
    if (obj->state > 1) {
        ret = func_0026ABB8(obj->handle);
    }
    return ret;
}
