typedef struct {
    u64 a, b, c;
} sys_lwmutex_t;

extern void *D_005596C0;
extern sys_lwmutex_t B_016FDFF0;
extern int sysPrxForUser_sysLwMutexCreate(void *, void *);
extern void func_002AC594(void) __attribute__((noreturn));

void *func_0030587C(u32 dst)
{
    void *m = &B_016FDFF0;
    sys_lwmutex_t *d = (sys_lwmutex_t *)(u64)dst;
    if (sysPrxForUser_sysLwMutexCreate(m, &D_005596C0) != 0) {
        func_002AC594();
    }
    d->a = B_016FDFF0.a;
    d->b = B_016FDFF0.b;
    d->c = B_016FDFF0.c;
    return d;
}
