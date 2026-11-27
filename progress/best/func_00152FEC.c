typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
void func_00152FEC(Vec3 *out, const Vec3 *a, const Vec3 *b, f32 t)
{
  f32 new_var;
  new_var = t;
  out->x = a->x + ((b->x - a->x) * new_var);
  out->y = a->y + ((b->y - a->y) * t);
  out->z = a->z + ((b->z - a->z) * t);
}

