volatile int stub;
__attribute__((noinline)) void func_00217540(void *field) { stub = (int)field; }

void func_00217A0C(void *, void *);

typedef struct {
    char pad[0x5c];
    void *unk5c;
    char pad1[4];
    s32 state;
    char pad2[0x78 - 0x64 - 4];
    void *child;
} Obj;

void func_002175B8(Obj *obj, char *arg4) {
    func_00217A0C(obj->unk5c, arg4 + 8);
    if (obj->state == 1) {
        func_00217540(obj->child);
    }
}
