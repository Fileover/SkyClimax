typedef struct {
    u8 pad0;
    u8 f1;
    s8 f2;
    u8 pad3;
    u32 f4;
    u32 f8;
    u8 padC[0x60 - 0xc];
    s16 f60;
    u8 pad62[0x94 - 0x62];
    u32 f94;
} T;

extern void func_0029186C(void);
extern void func_0029181C(void);
extern s32 func_0026CAA8(u64);
extern u32 func_002705C0(void);
extern u32 func_0026CFA8(u64);
extern void func_0026C3A8(u32);
extern u32 func_0027E588(u64);

s32 func_00274078(T *p) {
    s32 r = 0;
    func_0029186C();
    if (p != 0) {
        if (p->f8 != 0) {
            r = func_0026CAA8(p->f8);
        } else if (p->f94 != 0) {
            u32 x = *(u32 *)((u64)p->f94 + 0x28);
            if (x != 0) {
                r = func_0026CAA8(x);
            }
        }
    }
    func_0029181C();
    return r;
}

void func_00274108(T *p) {
    if (p->f8 != 0 && func_002705C0() != 0) {
        s8 c = p->f2;
        if (c >= 0) {
            if (c > 1) {
                if (c == 2) {
                    func_0026C3A8(p->f4);
                }
            } else if (func_0026CFA8(p->f8) == 3) {
                func_0026C3A8(p->f4);
            }
        }
    }
}

void func_0027419C(T *p) {
    if (p->f8 != 0 && func_0026CFA8(p->f8) == 4) {
        p->f60 = -1;
        p->f1 = 6;
    }
    if (p->f94 != 0 && func_0027E588(p->f94) == 3) {
        p->f1 = 6;
        p->f60 = -1;
    }
}
