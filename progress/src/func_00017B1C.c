s32 func_00017B1C(u32 *p, f32 *src)
{
  u32 v = *p;
  if (0 == v)
  {
    return 0;
  }
  f32 *dst = (f32 *) ((u32) ((u64) v));
  dst[0x34 / 4] = src[0];
  dst[0x38 / 4] = src[1];
  dst[0x3c / 4] = src[2];
  return 1;
}

