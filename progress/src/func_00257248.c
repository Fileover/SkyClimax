/* identical to func_00229DA0 (matched), with its names changed by decompdecomp */
extern s32 D_004CCB68[];
extern s32 D_004CB6A8[];

__attribute__((noinline)) void func_00257194(u32 *s) {
    s[0] = (u32)&D_004CB6A8;
}

void func_00257248(u32 *s) {
    s[0] = (u32)&D_004CCB68;
    func_00257194(s);
}
