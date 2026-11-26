typedef struct { unsigned char pad[0x1c]; unsigned int f; } S;
extern int func_002504B4(S *s);
int func_00234E78(S *s) { return func_002504B4(s->f); }
