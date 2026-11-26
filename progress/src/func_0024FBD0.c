typedef struct { unsigned char pad[0x2c]; unsigned int f; } S;
extern void func_00248B94(S *s);
void func_0024FBD0(S *s) { func_00248B94(s->f); }
