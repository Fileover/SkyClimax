typedef struct { unsigned char pad[0x260]; unsigned int f; } S;
extern void func_00263148(S *s);
void func_00255E98(S *s) { func_00263148(s->f); }
