extern void func_0016C5C0(int, u32);
typedef struct 
{
  u8 pad[0xa6c];
  s32 field;
} S;
void func_001682D8(S *p, u64 a4)
{
  S *new_var;
  new_var = p;
  if (new_var != 0)
  {
    func_0016C5C0(new_var->field, (u32) a4);
  }
}

