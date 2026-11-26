typedef struct {
    u32 count;
    void *entries[5];
} Manager;

extern Manager B_016DA508;

void func_00217564(void *);

void func_00222E84(void) {
    void **it = B_016DA508.entries;
    void **end = &B_016DA508.entries[5];
    do {
        func_00217564(*it++);
    } while (it != end);
}
