typedef struct {
    unsigned char pad[0x54];
    s32 f;
} S;

s32 func_0021FF28(S *s) {
    s32 old = s->f;
    s->f = 0;
    return old;
}
