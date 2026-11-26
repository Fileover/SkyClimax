/* identical to func_002DA8C4 (matched), with its names changed by decompdecomp */
extern void *D_004CD8E8;

typedef struct Node {
    u8 pad[0x3c];
    u32 field_0x3c;
} Node;

typedef struct Obj {
    void *vtable;
    u8 pad[0x3c];
    Node *node;
} Obj;

volatile int stub;
__attribute__((noinline)) void func_002DA6E8(void *arg) { stub = 0; }

void func_002DA8EC(Obj *obj) {
    obj->vtable = &D_004CD8E8;
    if (obj->node != NULL) {
        obj->node->field_0x3c = 0;
    }
    func_002DA6E8(obj);
}
