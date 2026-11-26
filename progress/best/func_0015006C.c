struct Node {
    u32 next;
};

struct Container {
    char pad[0x10];
    u32 head;
};

extern struct Container *B_014BCAF4[];

void func_0015006C(void) {
    struct Container *c = B_014BCAF4[0];
    u32 head = c->head;
    u32 curr = *(u32 *)(u64)head;
    while (curr != head) {
        curr = *(u32 *)(u64)curr;
    }
}
