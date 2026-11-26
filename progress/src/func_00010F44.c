typedef struct {
    u8 pad[12];
    s32 unkC;
    u32 unk10;
} Type_00571C24;

extern Type_00571C24 B_00571C24;
void func_000108D8(s32, u32);

void func_00010F44(void) {
    func_000108D8(B_00571C24.unkC, B_00571C24.unk10);
}
