/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CB928[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_0022E214(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_0022E264(u32 *s) {
    s[0] = (u32)&D_004CB928;
    func_0022E214(s);
}
