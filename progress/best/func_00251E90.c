extern const f32 D_004ECAD0;
extern u32 D_004CC920[];

typedef struct {
    u32 vptr;
    u32 pad4;
    u32 pad8;
    u32 padC;
    u32 pad10;
    u32 pad14;
    u32 pad18;
    f32 f1C;
    f32 f20;
    f32 f24;
    u32 pad28;
    u32 pad2C;
} S;

void func_00251E90(S *s, f32 f) {
    u32 *p = (u32 *)s;
    *(++p) = 0;
    p[2] = 0;
    p[1] = 0;
    s->f1C = D_004ECAD0;
    s->pad14 = 0;
    s->pad2C = 1;
    s->f24 = f;
    s->pad18 = 0;
    s->vptr = (u32)&D_004CC920;
    s->pad10 = 0;
    s->f20 = f;
}
