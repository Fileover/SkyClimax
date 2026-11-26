extern u32 D_004CCA08[];
typedef struct 
{
  u32 a;
  u32 b;
  u8 pad[0xc];
  f32 c;
} Src;
typedef struct 
{
  u32 vptr;
  u32 b;
  u32 c;
  u32 d;
  f32 e;
  u32 f;
  u32 g;
} Dst;
void func_002519B4(Dst *dst, unsigned int b, Src *src)
{
  dst->b = b;
  dst->vptr = (u32) (&D_004CCA08);
  dst->c = src->a;
  dst->d = src->b;
  dst->e = src->c;
  dst->f = 0;
  dst->g = 0;
}

