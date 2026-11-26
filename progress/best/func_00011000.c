typedef struct {
    u32 unk0;
    u32 unk4;
    u8 pad[12];
} Type_00571C24;

extern Type_00571C24 B_00571C24;
void func_000D14E4(u32);

void func_00011000(u32 arg) {
    if (B_00571C24.unk4) {
        return;
    }
    func_000D14E4(arg);
}
