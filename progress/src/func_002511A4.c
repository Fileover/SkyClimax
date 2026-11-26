typedef struct { unsigned char pad[0x60]; unsigned int f; } S;
extern void func_002F7A18(S *s);
void func_002511A4(S *s) { func_002F7A18(s->f); }
