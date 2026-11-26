typedef struct { unsigned char pad[0x14]; unsigned int f; } S;
extern void func_002F6E8C(S *s);
void func_00250F8C(S *s) { func_002F6E8C(s->f); }
