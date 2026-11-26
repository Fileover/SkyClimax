struct Container {
    char pad[0x38];
    u32 head;
};

void func_0019E3F0(struct Container **arr) {
    struct Container *c = arr[0];
    u32 head = c->head;
    u32 curr = *(u32 *)(u64)head;
    while (curr != head) {
        curr = *(u32 *)(u64)curr;
    }
}
