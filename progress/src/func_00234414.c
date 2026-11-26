typedef struct 
{
  void (*fn)(void *);
} Obj;
void func_00234414(void *p)
{
  void *new_var;
  void *new_var2;
  new_var = p;
  if (new_var2 = p)
  {
    Obj *o = *((Obj **) new_var);
    void (**f)(void *) = (void (**)(void *)) (((char *) o) + 8);
    (*f)(p);
  }
}

