typedef struct {
    u32 count;
    void *entries[];
} Manager;

extern Manager B_016DA240;

void func_00217564(void *);

void func_002171F8(void) {
    func_00217564(B_016DA240.entries[0]);
}
