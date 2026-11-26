extern unsigned long long func_001B2318(void);
inline unsigned long long inline_fn()
{
  return func_001B2318();
}

unsigned int func_001B7590(void)
{
  return (unsigned int) inline_fn();
}

