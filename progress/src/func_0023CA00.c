/* identical to func_0023C8DC (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_0023C680(void *a, void *node) { stub = (int)a; }
__attribute__((noinline)) void func_0023C71C(void *b, void *node) { stub = (int)b; }
extern void func_002F68B0(void *, u32);

void func_0023CA00(void *a, void *b, void *node) {
    if (node != NULL) {
        func_0023C680(a, node);
        if (b != NULL) {
            func_0023C71C(b, node);
        }
        func_002F68B0(node, 0xc);
    }
}
