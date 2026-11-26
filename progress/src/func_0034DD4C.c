typedef struct 
{
  void (*fn)(void *);
} Obj;

void func_0034DD4C(void *p)
{
  void (*new_var2)(void *);
  void *new_var;
  new_var = p;
  if (p)
  {
    Obj *o = *((Obj **) new_var);
    void (**f)(void *) = (void (**)(void *)) (((char *) o) + 0xc);
    new_var2 = *f;
    new_var2(p);
  }
}
