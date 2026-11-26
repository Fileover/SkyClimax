typedef struct { unsigned char pad[0x44]; unsigned int f; } S;
extern void func_002AC2D0(unsigned int);
void func_002A7C7C(S *s) { if (s) func_002AC2D0(s->f); }
