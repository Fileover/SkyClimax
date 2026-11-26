typedef struct 
{
  char pad[0x1c];
  u32 field_0x1c;
} S;
void func_0025C324(u32);
void func_0025BA84(S *s, int b, u32 *out)
{
  long long new_var;
  new_var = s->field_0x1c;
  *out = 0;
  func_0025C324(new_var);
}

