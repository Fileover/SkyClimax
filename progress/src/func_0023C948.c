extern char STR_0045E6A8[];
extern char STR_0045E6B0[];

typedef struct {
    u8 pad[0x18];
    u32 f18;
} Arg0;

typedef struct Node {
    void *f0;
    void *f4;
    void *f8;
} Node;

extern void *func_002F6AD8(u32, u32, const char *, u32);
extern void func_0020D028(u32, const char *, s32);

void func_0023C6E8(Arg0 *a, Node *b) __attribute__((noinline));
void func_0023C6E8(Arg0 *a, Node *b) {
    b->f0 = a;
}

void func_0023C654(void *a, Node *b) __attribute__((noinline));
void func_0023C654(void *a, Node *b) {
    b->f0 = a;
}

Node *func_0023C948(Arg0 *arg0, void *arg1) {
    if (arg1 != NULL) {
        Node *res = (Node *)func_002F6AD8(12, arg0->f18, STR_0045E6A8, 4);
        if (res != NULL) {
            res->f4 = NULL;
            res->f8 = NULL;
            res->f0 = NULL;
            func_0023C6E8(arg0, res);
            func_0023C654(arg1, res);
            return res;
        }
        func_0020D028(0, STR_0045E6B0, -3);
    }
    return NULL;
}
