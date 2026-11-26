extern int sysPrxForUser_sysLwMutexUnlock(void *);

int func_00305798(void *mutex)
{
    return sysPrxForUser_sysLwMutexUnlock(mutex) != 0;
}
