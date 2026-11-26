extern u64 func_0016B3B8(s32);
typedef struct 
{
  u8 pad[0xa6c];
  s32 field;
} S;
u8 func_00167D14(S *s)
{
  unsigned long new_var;
  new_var = (u8) func_0016B3B8(s->field);
  return new_var;
}

