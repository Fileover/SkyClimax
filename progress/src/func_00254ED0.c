extern s32 D_004CCA80[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_00254E80(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_00254ED0(u32 *s) {
    s[0] = (u32)&D_004CCA80;
    func_00254E80(s);
}
