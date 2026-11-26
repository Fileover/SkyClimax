typedef struct { char pad[0x2000]; f32 *matrix; } B_0115A2E8_t;
extern B_0115A2E8_t B_0115A2E8;

u32 func_000E51E8(f32 *out, const f32 *in) {
    u32 ret = (u32)out;
    f32 y = in[1];
    f32 x = in[0];
    f32 z = in[2];
    f32 *m = B_0115A2E8.matrix;

    f32 oy = y * m[5];
    f32 ox = y * m[1];
    f32 oz = y * m[9];

    oy += x * m[4];
    ox += x * m[0];
    oz += x * m[8];

    oy += m[7];
    ox += m[3];
    oz += m[11];

    oy += z * m[6];
    ox += z * m[2];
    oz += z * m[10];

    out[1] = oy;
    out[0] = ox;
    out[2] = oz;

    return ret;
}
