extern u32 func_0016D1A8(int);
typedef struct 
{
  u8 pad[0xa6c];
  s32 field;
} S;
u32 func_0016803C(S *s)
{
  u32 r = 0xffffffffu;
  S *new_var;
  if (s)
  {
    new_var = s;
    r = func_0016D1A8(new_var->field);
  }
  return r;
}

