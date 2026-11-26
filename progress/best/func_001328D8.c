typedef struct { f32 x, y, z, w; } Vec4;
extern s32 func_00152A6C(Vec4 *, u32);
extern u8 *B_014976B8[];

u32 func_001328D8(u32 arg) {
    u8 *p = B_014976B8[0];
    if (p == NULL) p = (u8 *)&B_014976B8[1];
    Vec4 v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    v.x = *(f32 *)(p + 0x6c);
    v.y = *(f32 *)(p + 0x70);
    v.z = *(f32 *)(p + 0x74);
    v.w = *(f32 *)(p + 0x520);
    return (u8)func_00152A6C(&v, arg);
}
