typedef struct Object Object;
typedef struct VTable
{
  void (*f0)(void);
  void (*f1)(void);
  void (*fn_8)(Object *);
  void (*f3)(void);
  void (*fn_10)(Object *);
} VTable;
struct Object
{
  VTable *vtable;
};
void func_00260C2C(Object *obj)
{
  void (*new_var)(Object *);
  new_var = obj->vtable->fn_10;
  new_var(obj);
  obj->vtable->fn_8(obj);
}

