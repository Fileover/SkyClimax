/* identical to func_0023433C (matched), with its names changed by decompdecomp */
typedef struct 
{
  void (*fn)(void *);
} Obj;
void func_002483C0(void *p)
{
  void *new_var;
  new_var = p;
  if (p)
  {
    Obj *o = *((Obj **) new_var);
    void (**f)(void *) = (void (**)(void *)) (((char *) o) + 8);
    (*f)(p);
  }
}

