typedef struct { unsigned char pad[0x2c]; unsigned int f; } S;
extern void func_00248C84(unsigned int);
void func_0024FE6C(S *s) { if (s->f) func_00248C84(s->f); }
