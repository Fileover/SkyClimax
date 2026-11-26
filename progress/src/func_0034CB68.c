typedef struct { unsigned char pad[0xb4]; unsigned int f; } S;
extern void func_00255E98(S *s);
void func_0034CB68(S *s) { func_00255E98(s->f); }
