extern u32 func_0016CD68(int);
typedef struct 
{
  u8 pad[0xa6c];
  s32 field;
} S;
u32 func_001681A8(S *s)
{
  s32 new_var;
  u32 r = 0;
  if (s)
  {
    r = func_0016CD68(new_var = s->field);
  }
  return r;
}

