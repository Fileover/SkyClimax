typedef struct Slot
{
  u8 pad[0x74];
  f32 x;
  f32 y;
  f32 z;
  u8 pad_end[0x200 - 0x80];
} Slot;
typedef struct Context
{
  u8 pad[0x154];
  s32 current_index;
  Slot items[1];
} Context;
Context *func_001B89E4(u32);
s32 func_000F3170(f32 *out)
{
  s32 new_var;
  s32 ret = 0;
  Context *ctx = func_001B89E4(0x1f);
  if (ctx)
  {
    ret = 1;
    new_var = ctx->current_index;
    if (out)
    {
      Slot *slot = &ctx->items[new_var];
      f32 x = slot->x;
      f32 y = slot->y;
      f32 z = slot->z;
      out[0] = x;
      out[1] = y;
 do { out[2] = z; } while (0);
    }
  }
  return ret;
}
