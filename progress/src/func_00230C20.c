/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CB9F0[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_00230BC0(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_00230C20(u32 *s) {
    s[0] = (u32)&D_004CB9F0;
    func_00230BC0(s);
}
