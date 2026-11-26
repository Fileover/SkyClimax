extern void *D_005596C0;
extern int sysPrxForUser_sysLwMutexCreate(void *, void *);
extern void func_002AC594(void) __attribute__((noreturn));

void func_00305844(void *mutex)
{
    if (sysPrxForUser_sysLwMutexCreate(mutex, &D_005596C0) != 0) {
        func_002AC594();
    }
}
