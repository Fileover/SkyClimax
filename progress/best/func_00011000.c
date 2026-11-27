typedef struct {
    u32 unk0;
    void (*cb)(void);
} Struct_B_00571C24;

extern Struct_B_00571C24 B_00571C24;
void func_000D14E4(u64);

void func_00011000(u32 x) {
    u64 x64 = x;
    if (B_00571C24.cb != NULL) {
        return;
    }
    func_000D14E4(x64);
}
