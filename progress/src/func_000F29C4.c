extern void *func_001B89E4(int);
extern void func_0006BB4C(u32, u32);
void func_000F29C4(u64 p)
{
  char *new_var;
  void *v = func_001B89E4(0x1f);
  if (v)
  {
    new_var = ((char *) v) + 0x5dc;
    func_0006BB4C((u32) new_var, (u32) p);
  }
}

