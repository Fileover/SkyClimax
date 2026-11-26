/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CC9E0[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_002521EC(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_0025224C(u32 *s) {
    s[0] = (u32)&D_004CC9E0;
    func_002521EC(s);
}
