typedef struct 
{
  void (*fn)(void *);
} Obj;
void func_00348230(void *p)
{
  void (*new_var2)(void *);
  void *new_var;
  new_var = p;
  if (p)
  {
    Obj *o = *((Obj **) new_var);
    void (**f)(void *) = (void (**)(void *)) (((char *) o) + 8);
    new_var2 = *f;
    new_var2(p);
  }
}

