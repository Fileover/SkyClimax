extern u32 D_003D3530[];
extern const char D_0046BAB8[];
extern const char STR_0046BB00[];

int sysPrxForUser_sysLwMutexDestroy(void *);
char *func_002FDB78(int);
void func_002D021C(void *);

extern volatile int D_dummy;
static void __attribute__((noinline)) func_002E9954(const char *fmt, ...) {
    D_dummy = 1;
}

typedef struct {
    u32 unk0[2];
    char *name;
    u32 padC;
    u32 mutex[6];
} MutexWrap;

void func_002EA120(MutexWrap *wrap) {
    u32 *mutex = wrap->mutex;
    int ret;

    if (__builtin_expect(D_003D3530[4] == mutex[2], 0))
        goto invalid;

    ret = sysPrxForUser_sysLwMutexDestroy(mutex);
    if (__builtin_expect(ret != 0, 0))
        goto failed;

done:
    func_002D021C(wrap);
    return;

invalid:
    func_002E9954(STR_0046BB00, wrap->name);
    goto done;

failed: {
        char *name = wrap->name;
        char *err = func_002FDB78(ret);
        func_002E9954(D_0046BAB8, name, ret, err);
        goto done;
    }
}
