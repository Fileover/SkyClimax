extern u32 D_004CCF80[];

typedef struct {
    u32 f00;
    u32 f04;
    u32 f08;
    u32 f0c;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
} Obj;

void func_00261538(Obj *s, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f) {
    s->f24 = b;
    s->f00 = (u32)D_004CCF80;
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
    int b = func_002F6880(4);
    int c = func_0025F868();
    return (b + 0x20) + (a + c);
}

int func_0020BC84(void *ptr, u64 size);

void func_00261674(Obj *s) {
    if (s->f1c != 0) {
        func_0020BC84((void *)s->f08, s->f1c);
        s->f1c = 0;
        *(u32 *)((u64)s->f14 + 0x58) = 0;
        *(u32 *)((u64)s->f14 + 0x54) = 0;
    }
    if (s->f20 != 0) {
        func_0020BC84((void *)s->f0c, s->f20);
        s->f20 = 0;
        *(u32 *)((u64)s->f14 + 0x60) = 0;
        *(u32 *)((u64)s->f14 + 0x5c) = 0;
    }
}

void func_002616FC(Obj *s) {
    if (s->f10 != 1)
        return;
    if (s->f18 != 0) {
        func_0020BC84((void *)s->f04, s->f18);
        s->f18 = 0;
    }
    if (s->f14 != 0) {
        func_0020BC84((void *)s->f04, s->f14);
        s->f14 = 0;
    }
}
