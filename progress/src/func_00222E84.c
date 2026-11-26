typedef struct {
    u32 count;
    void *entries[5];
} Manager;

extern Manager B_016DA508;

void func_00217564(void *);

void func_00222E84(void) {
    char *base = (char *)&B_016DA508;
    void **end = (void **)(base + 0x18);
    void **it = (void **)(base + 4);
    do {
        func_00217564(*it++);
    } while (it != end);
}
