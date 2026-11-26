extern void func_0016B0B4(int, u32);
typedef struct 
{
  u8 pad[0xa6c];
  s32 field;
} S;
void func_00168604(S *p, u64 a4)
{
  S *new_var;
  new_var = p;
  if (new_var != 0)
  {
    func_0016B0B4(new_var->field, (u32) a4);
  }
}

