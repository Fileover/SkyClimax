extern void sysPrxForUser_sysLwMutexDestroy(u32);
typedef struct 
{
  u8 pad[0x30];
  u32 flag;
} S;
void func_002C8DA4(S *s)
{
 do { if (s->flag == 1) { sysPrxForUser_sysLwMutexDestroy((u32) ((u64) (((char *) s) + 8))); } } while (0);
}
