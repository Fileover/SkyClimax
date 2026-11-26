typedef struct { unsigned char pad[0x8]; unsigned int f; } S;
extern void func_0020CD98(unsigned int);
void func_002FB944(S *s) { if (s->f) func_0020CD98(s->f); }
