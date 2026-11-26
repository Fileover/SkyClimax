/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CCC90[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_0025C03C(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_0025C08C(u32 *s) {
    s[0] = (u32)&D_004CCC90;
    func_0025C03C(s);
}
