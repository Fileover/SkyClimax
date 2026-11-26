extern int sysPrxForUser_sysLwMutexLock(void *, u64);

int func_003057D0(void *mutex)
{
    return sysPrxForUser_sysLwMutexLock(mutex, 0) != 0;
}
