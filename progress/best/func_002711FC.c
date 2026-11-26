extern const char STR_00463A38[];
extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_002926D4(const char *);
extern s32 func_0026AB08(void *);

typedef struct {
    u8 pad0;
    s8 state;
    u8 pad2[2];
    void *handle;
} Obj;

s32 func_002711FC(Obj *obj) {
    s32 ret;
    func_0029186C();
    if (__builtin_expect(obj == NULL, 0)) {
        func_002926D4(STR_00463A38);
        ret = -1;
    } else {
        ret = 0;
        if (obj->state > 1) {
            ret = func_0026AB08(obj->handle);
        }
    }
    func_0029181C();
    return ret;
}
