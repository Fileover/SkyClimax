typedef struct { unsigned char pad[0xb4]; unsigned int f; } S;
extern void func_00255AE8(S *s);
void func_0034CB40(S *s) { func_00255AE8(s->f); }
