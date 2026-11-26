extern void *D_004CDA30;
extern char D_00559610[];
typedef struct Vtable
{
  void (*unk0)(void);
  void (*callback)(void *self, u64 arg1, u32 arg2, u32 arg3, u32 arg4);
} Vtable;
typedef struct Manager
{
  Vtable *vtable;
} Manager;
typedef struct Obj
{
  void *vtable;
  u8 pad[0x94];
  u8 sub1[0x18];
  u8 sub2[0x34];
  u32 field_e4;
} Obj;
void func_002EADC8(void *);
void func_002EB3B8(void *);
void func_002DA8EC(void *);
void func_002EDD68(Obj *obj)
{
  int new_var;
  u32 val = obj->field_e4;
  obj->vtable = &D_004CDA30;
  new_var = 1;
  if (__builtin_expect(val != 0, new_var))
  {
    Manager *mgr = (Manager *) (D_00559610 + 8);
    mgr->vtable->callback(mgr, (u64) val, 0x100b0103, 0, 0);
  }
  func_002EADC8(&obj->sub2);
  func_002EB3B8(&obj->sub1);
  func_002DA8EC(obj);
}

