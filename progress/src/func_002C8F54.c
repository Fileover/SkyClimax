extern void sysPrxForUser_sysLwMutexDestroy(u32);
typedef struct 
{
  u8 pad[0x38];
  u32 flag;
} S;
void func_002C8F54(S *s)
{
  char *new_var;
  if (s->flag == 1)
  {
    sysPrxForUser_sysLwMutexDestroy((u32) ((u64) (new_var = ((char *) s) + 0x10)));
  }
}

