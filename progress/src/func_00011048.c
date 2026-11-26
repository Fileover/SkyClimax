void func_001503F4(void);
void func_0015052C(void);

typedef struct {
    u32 unk0;
    void (*cb)(void);
} Struct_B_00571C24;

extern Struct_B_00571C24 B_00571C24;

void func_00011048(void) {
    func_001503F4();
    if (B_00571C24.cb != NULL) {
        B_00571C24.cb();
    }
    func_0015052C();
}
