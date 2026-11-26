extern void *D_004CC7B0;

typedef struct {
    void *vptr;
    u32 f4;
    u32 f8;
    u8 fc;
    u8 fd;
} VocRegSync;

void func_0024EAD8(VocRegSync *s, u32 r4, u32 r5) {
    u32 *sub0 = (u32 *)s;
    u32 *sub1 = (u32 *)((char *)s + 0x24);

    s->fd = 0;
    s->fc = 0;
    s->vptr = &D_004CC7B0;

    *(sub0 += 4) = 0;

    s->f8 = r5;
    s->f4 = 1;

    sub0[1] = 0;
    sub0[4] = 0;
    sub0[2] = r4;
    sub0[3] = 2;

    sub1[4] = 0;
    sub1[2] = r4;
    sub1[3] = 2;
    sub1[0] = 0;
    sub1[1] = 0;
}
