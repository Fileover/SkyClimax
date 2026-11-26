extern f32 D_004E5274;
extern f32 D_004E5278;

s32 func_0001789C(u32 *p, f32 v) {
    u32 a = *p;
    if (a == 0) return 0;
    f32 t = v >= 0.0f ? v : D_004E5274;
    f32 d = t - D_004E5278;
    f32 r = d >= 0.0f ? d : D_004E5278;
    *(f32 *)((u32)(u64)a + 0x64) = r;
    return 1;
}
