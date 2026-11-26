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

u32 func_00261314(u32 a, u32 b) {
    u32 x = a + b;
    x = (x & 0xFFFFFF80) + 0x80;
    return x & 0xFFFFFF80;
}

extern s32 func_002F6880(int);
extern s32 func_0025F868(s32);
s32 func_002612D0(void) {
    s32 x = func_002F6880(4);
    return (s32)((x + 0x14) + func_0025F868(x));
}

extern u32 func_00260CE4(void *a, void *b);
extern u32 func_00260D28(void *a, void *b);
extern u32 func_002F8218(u32 a, u32 b, int c);
extern u32 func_0025F8B0(void *a, void *b);
s32 func_00261250(void *a, void *b) {
    u32 x = func_00260CE4(a, b);
    u32 y = func_002F8218(x, func_00260D28(a, b), 4);
    return (s32)(y + func_0025F8B0(a, b));
}
