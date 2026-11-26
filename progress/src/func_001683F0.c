typedef struct { unsigned char pad[0xa6c]; int f; } S;
extern void func_00170D08(int);
void func_001683F0(S *s) { if (s) func_00170D08(s->f); }
