/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CC7F0[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_0024FAD4(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_0024FB98(u32 *s) {
    s[0] = (u32)&D_004CC7F0;
    func_0024FAD4(s);
}
