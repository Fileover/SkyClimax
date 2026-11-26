typedef struct { char pad[0x2000]; f32 *matrix; } B_0115A2E8_t;
extern B_0115A2E8_t B_0115A2E8;

f32 *func_000E5274(f32 *out, const f32 *in) {
    f32 *m = B_0115A2E8.matrix;
    f32 x = in[0];
    f32 y = in[1];
    f32 z = in[2];
    f32 ox, oy, oz;

    ox = y*m[1] + x*m[0] + z*m[2];
    oy = y*m[5] + x*m[4] + z*m[6];
    oz = y*m[9] + x*m[8] + z*m[10];

    out[0] = ox;
    out[1] = oy;
    out[2] = oz;
    return out;
}
