typedef struct { unsigned char pad[0x14]; unsigned int f; } S;
extern void func_002F6BD4(S *s);
void func_00250F64(S *s) { func_002F6BD4(s->f); }
