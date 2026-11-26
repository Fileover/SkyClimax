typedef struct { unsigned char pad[0xa6c]; int f; } S;
extern void func_00170BF8(int);
void func_001683BC(S *s) { if (s) func_00170BF8(s->f); }
