void func_002C1E64(u32);

typedef struct {
    u32 val;
    u8 flag;
} Obj;

void func_001CF48C(Obj *obj, u32 val, s32 cond) {
    obj->val = val;
    obj->flag = 0;
    if (cond) {
        func_002C1E64(val);
        obj->flag = 1;
    }
}
