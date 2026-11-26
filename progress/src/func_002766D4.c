extern const char STR_00464420[];
extern void func_00294C28(void);
extern void func_00294C04(void);
extern void func_00294C4C(const char *);
extern s32 func_0027942C(void *);

typedef struct {
    u8 pad0;
    u8 state;
    u8 pad2[6];
    void *handle;
} Obj;

s32 func_002766D4(Obj *obj) {
    s32 ret = 0;
    func_00294C28();
    if (__builtin_expect(obj == NULL, 0)) {
        func_00294C4C(STR_00464420);
        ret = -1;
    } else if ((u8)(obj->state - 2) <= 1) {
        ret = func_0027942C(obj->handle);
        func_00294C04();
        return ret;
    }
    func_00294C04();
    return ret;
}
