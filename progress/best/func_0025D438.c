extern u32 D_004CCDA0;
extern u32 D_004CC1B0;

typedef struct {
    volatile u32 vptr;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
} S;

void func_0025D438(S *s, u32 r4, u32 r5, u32 r6, u32 r7, u32 r8) {
    s->f18 = r4;
    s->vptr = (u32)&D_004CC1B0;
    s->vptr = (u32)&D_004CCDA0;
    s->f2c = 4;
    s->f4 = r5;
    s->f1c = r6;
    s->f20 = r7;
    s->f24 = r8;
    s->f28 = 0;
    s->f8 = 0;
    s->fc = 0;
    s->f10 = 0;
    s->f14 = 0;
}
