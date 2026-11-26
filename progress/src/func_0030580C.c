/* identical to func_00305798 (matched), with its names changed by decompdecomp */
extern int sysPrxForUser_sysLwMutexDestroy(void *);

int func_0030580C(void *mutex)
{
    return sysPrxForUser_sysLwMutexDestroy(mutex) != 0;
}
