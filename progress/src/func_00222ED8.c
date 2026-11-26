typedef struct {
    u32 count;
    void *entries[];
} Manager;

extern Manager B_016DA508;

void func_00217564(void *);

void func_00222ED8(int index) {
    func_00217564(B_016DA508.entries[index]);
}
