typedef struct {
    u32 unk0[2];
    char *name;
    u32 padC;
    u32 cond[2];
} CondWrap;

extern u32 D_003D3530[];
extern const char STR_0046BA48[];

int sysPrxForUser_sysLwCondDestroy(void *);
char *func_002FDB78(int);
void func_002D021C(void *);

extern volatile int D_dummy;
static void __attribute__((noinline)) func_002E9954(const char *fmt, ...) {
    D_dummy = 1;
}

void func_002E9F48(CondWrap *wrap) {
    u32 *cond = wrap->cond;

    if (__builtin_expect(cond[0] != 0, 1)) {
        int ret = sysPrxForUser_sysLwCondDestroy(cond);
        if (__builtin_expect(ret != 0, 0)) {
            char *name = wrap->name;
            char *err = func_002FDB78(ret);
            func_002E9954(STR_0046BA48, name, ret, err);
        }
        {
            u32 b = D_003D3530[1];
            u32 a = D_003D3530[0];
            wrap->cond[1] = b;
            wrap->cond[0] = a;
        }
    }
    func_002D021C(wrap);
}
