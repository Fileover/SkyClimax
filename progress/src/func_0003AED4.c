typedef struct {
    u32 a, b, c, d;
} Quad;

#define BSWAP32(x) (((x >> 24) | ((x >> 8) & 0x0000FF00)) | (((x << 8) & 0x00FF0000) | (x << 24)))

void func_0003AED4(Quad *p) {
    u32 a = p->a;
    u32 b = p->b;
    u32 c = p->c;
    u32 d = p->d;

    p->a = BSWAP32(a);
    p->b = BSWAP32(b);
    p->c = BSWAP32(c);
    p->d = BSWAP32(d);
}
