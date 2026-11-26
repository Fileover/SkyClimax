typedef struct 
{
  char pad[0x1e];
  vu8 flag;
  vu32 a;
  vu32 b;
} S;
extern void *func_001B89E4(volatile long long id);
void func_000112C8(S *p)
{
  S *q = (S *) func_001B89E4(0x10);
  if (q)
  {
    q->flag = 1;
    q->a = 0;
    q->b = (u32) p;
  }
}

