extern s32 D_004CB3A0[];
extern s32 D_004CB4A8[];

void func_002223A0(u32 *out) {
    *(vu32 *)out = (u32)&D_004CB3A0;
    *(vu32 *)out = (u32)&D_004CB4A8;
}
