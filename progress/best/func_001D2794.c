typedef struct { u32 f0; u32 f4; u32 f8; u32 fC; s64 fT; } DT;
extern void func_001D217C(DT *);

DT *func_001D2794(u64 addr, s32 b) {
    DT *p = (DT *)(u32)addr;
    p->f4 = 1;
    p->f8 = 1;
    if (b < 0) {
        s64 t = (s64)(-b) * 1000000000LL;
        p->fT = -t;
    } else {
        p->fT = (s64)b * 1000000000LL;
    }
    p->f0 = 1970;
    func_001D217C(p);
    return p;
}
