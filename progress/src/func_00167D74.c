extern u64 func_0016E188(s32);
typedef struct 
{
  u8 pad[0xa6c];
  s32 field;
} S;
u8 func_00167D74(S *s)
{
  unsigned long new_var;
  new_var = (u8) func_0016E188(s->field);
  return new_var;
}

