/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CDAE8[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_00306478(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_00306538(u32 *s) {
    s[0] = (u32)&D_004CDAE8;
    func_00306478(s);
}
