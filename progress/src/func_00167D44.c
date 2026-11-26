extern u64 func_0016B42C(s32);
typedef struct 
{
  u8 pad[0xa6c];
  s32 field;
} S;
u8 func_00167D44(S *s)
{
  unsigned long new_var;
  new_var = (u8) func_0016B42C(s->field);
  return new_var;
}

