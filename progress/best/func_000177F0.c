s32 func_000177F0(u32 *p)
{
  u32 v = *p;
  if (v == 0)
  {
    return 0;
  }
  s32 x = *((s32 *) ((u32) ((u64) (*p))));
  u32 a = (x < 0) ? ((u32) (-x)) : ((u32) x);
  return (s32) (a >> 31);
}

