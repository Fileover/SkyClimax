extern const char STR_0046BC20[];
extern const char STR_0046BC58[];

int sysPrxForUser_sysLwCondSignalAll(void *);
char *func_002FDB78(int);

extern volatile int D_dummy;
static void __attribute__((noinline)) func_002E9954(const char *fmt, ...) {
    D_dummy = 1;
}

typedef struct {
    u32 unk0[2];
    char *name;
    u32 padC;
    u32 cond[2];
} CondWrap;

void func_002EAAF4(CondWrap *wrap) {
    u32 *cond = wrap->cond;
    int ret;

    if (__builtin_expect(cond[0] == 0, 0)) {
        func_002E9954(STR_0046BC58, wrap->name);
        return;
    }

    ret = sysPrxForUser_sysLwCondSignalAll(cond);
    if (__builtin_expect(ret != 0, 0)) {
        char *name = wrap->name;
        char *err = func_002FDB78(ret);
        func_002E9954(STR_0046BC20, name, ret, err);
    }
}
