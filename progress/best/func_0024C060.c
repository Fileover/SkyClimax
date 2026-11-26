extern void *D_004CC710;
extern void *D_004CCF68;

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
} Sub;

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
    Sub sub;
} S;

void func_0024C060(S *s, u32 r4, u32 r5, u32 r6, u32 r7, u32 r8) {
    Sub *sub = &s->sub;
    u32 vd = (u32)&D_004CC710;
    u32 vb = (u32)&D_004CCF68;

    s->f4 = r5;
    s->vptr = vb;
    s->vptr = vd;

    s->f8 = r6;
    s->fc = r4;
    s->f10 = 0;
    s->f24 = r8;
    sub->f10 = 0;
    s->f20 = r7;
    sub->fc = 2;
    sub->f8 = r4;
    s->f18 = 0;
    s->f1c = 0;
    s->f14 = 0;
    sub->f4 = 0;
    sub->f0 = 0;
}
