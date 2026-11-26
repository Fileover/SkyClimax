extern u32 func_0016CE48(int);
typedef struct 
{
  u8 pad[0xa6c];
  s32 field;
} S;
u32 func_001681E8(S *s)
{
  s32 new_var;
  u32 r = 0;
  if (s)
  {
    r = func_0016CE48(new_var = s->field);
  }
  return r;
}

