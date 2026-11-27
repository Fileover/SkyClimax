typedef struct {
    u32 f00, f04, f08, f0c, f10, f14, f18, f1c, f20, f24;
} Obj;
typedef struct {
    u8 pad[0x54];
    u32 a54;
    u32 a58;
    u32 a5c;
    u32 a60;
} Sub;
int func_0020BC84(u32 ptr, u64 size);
void func_00261674(Obj *s) {
    Sub *p;
    if (s->f1c != 0) {
        func_0020BC84(s->f08, s->f1c);
        s->f1c = 0;
        p = (Sub *)s->f14;
        p->a54 = 0;
        p->a58 = 0;
    }
    if (s->f20 != 0) {
        func_0020BC84(s->f0c, s->f20);
        s->f20 = 0;
        p = (Sub *)s->f14;
        p->a5c = 0;
        p->a60 = 0;
    }
}
