/* identical to func_002F6F8C (matched), with its names changed by decompdecomp */
typedef struct 
{
  u32 pad;
  u32 val;
} S;
extern void func_0020CD98(u32);
void func_002F6FBC(S *s, u32 *out)
{
  long long new_var;
  new_var = s->val;
  *out = 0;
  func_0020CD98(new_var);
}

