/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CDB18[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_0030641C(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_00306468(u32 *s) {
    s[0] = (u32)&D_004CDB18;
    func_0030641C(s);
}
