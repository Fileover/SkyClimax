extern s32 D_004CB3A0[];
extern s32 D_004CB4A8[];

void func_002223A0(u32 *out) {
    u32 a = (u32)&D_004CB4A8;
    u32 b = (u32)&D_004CB3A0;
    ((vu32 *)out)[0] = b;
    ((vu32 *)out)[0] = a;
}
