volatile int stub;
__attribute__((noinline)) void func_00217460(void *obj) { stub = (int)obj; }
__attribute__((noinline)) void func_00217540(void *field) { stub = (int)field; }

typedef struct {
    char pad[0x64];
    s32 state;
    char pad2[0x78 - 0x64 - 4];
    void *child;
} Obj;

void func_00217564(Obj *obj) {
    if (obj->state == 1) {
        func_00217540(obj->child);
    } else if (obj->state == 0) {
        func_00217460(obj);
    }
}
