typedef struct { unsigned char pad[0x260]; unsigned int f; } S;
extern void func_00262D10(S *s);
void func_00255AE8(S *s) { func_00262D10(s->f); }
