extern u32 D_004CCF80;

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

void func_00261538(Obj *s, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f) {
    s->f24 = b;
    s->f00 = (u32)&D_004CCF80;
    s->f04 = a;
    s->f10 = 0;
    s->f14 = c;
    s->f18 = d;
    s->f1c = e;
    s->f20 = f;
    s->f08 = 0;
    s->f0c = 0;
}

int func_0020BC3C(int);
int func_002F6880(int);
int func_0025F868(void);

int func_00261438(void) {
    int a = func_0020BC3C(0x80);
    int b = func_002F6880(4) + 0x20;
    int c = func_0025F868();
    return b + (a + c);
}

int func_0020BC84(u32 ptr, u64 size);

void func_00261674(Obj *s) {
    if (s->f1c != 0) {
        func_0020BC84(s->f08, s->f1c);
        s->f1c = 0;
        ((Sub *)s->f14)->a58 = 0;
        ((Sub *)s->f14)->a54 = 0;
    }
    if (s->f20 != 0) {
        func_0020BC84(s->f0c, s->f20);
        s->f20 = 0;
        ((Sub *)s->f14)->a60 = 0;
        ((Sub *)s->f14)->a5c = 0;
    }
}

void func_002616FC(Obj *s) {
    if (s->f10 != 1)
        return;
    if (s->f18 != 0) {
        func_0020BC84(s->f04, s->f18);
        s->f18 = 0;
    }
    if (s->f14 != 0) {
        func_0020BC84(s->f04, s->f14);
        s->f14 = 0;
    }
}
