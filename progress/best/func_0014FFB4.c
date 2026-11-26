extern u32 D_004CA9A8;

typedef struct MyClass {
    u32 vptr;
    u32 node_next;
    u32 node_prev;
    u32 pad;
    u32 root;
    u32 count;
    u8 pad2[0x318 - 0x18];
    u32 a;
    u32 b;
    u32 x;
    u8 flag;
} MyClass;

void func_0014FFB4(MyClass *s) {
    u32 *p = &s->a;
    *p = 0;
    s->vptr = (u32)&D_004CA9A8;
    p[1] = 0;
    
    u32 *node = &s->node_next;
    s->root = (u32)node;
    s->count = 0;
    node[1] = (u32)node;
    
    u32 root = s->root;
    *(u32 *)(u64)root = root;
    
    s->x = 0;
    s->flag = 0;
}
