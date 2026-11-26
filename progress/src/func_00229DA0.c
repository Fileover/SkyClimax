extern s32 D_004CB5F0[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_00229D50(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_00229DA0(u32 *s) {
    s[0] = (u32)&D_004CB5F0;
    func_00229D50(s);
}
