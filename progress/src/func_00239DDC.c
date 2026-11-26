/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CBCC8[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_00239D7C(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_00239DDC(u32 *s) {
    s[0] = (u32)&D_004CBCC8;
    func_00239D7C(s);
}
