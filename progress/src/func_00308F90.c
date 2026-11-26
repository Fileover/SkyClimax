extern u32 D_004C9908[];
extern void func_000D1654(u32 *);
extern void func_000F3ED0(u32 *);
void func_00308F90(u32 *p)
{
  u32 (*new_var)[];
  new_var = &D_004C9908;
  p[0] = (u32) new_var;
  func_000D1654(p);
  func_000F3ED0(p);
}

