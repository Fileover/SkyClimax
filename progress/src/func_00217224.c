typedef struct {
    u32 count;
    void *entries[];
} Manager;

extern Manager B_016DA240;

void func_00217564(void *);

void func_00217224(int index) {
    func_00217564(B_016DA240.entries[index]);
}
