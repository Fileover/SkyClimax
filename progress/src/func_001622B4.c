void func_0001F30C(void *);
struct Sub
{
  char data[0x200];
  char pad[0x18];
  u32 indices[32];
};
struct Container
{
  char pad[0xac];
  struct Sub sub;
};
void func_001622B4(struct Container *c)
{
  struct Sub *sub = &c->sub;
  char *new_var;
  int i;
  for (i = 0; i < 32; i++)
  {
    new_var = ((char *) sub) + (sub->indices[i] << 4);
    func_0001F30C(new_var);
  }

  func_0001F30C(((char *) sub) + 0x200);
}

