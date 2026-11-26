typedef struct { unsigned char pad[0x2c]; unsigned int f; } S;
extern void func_002F8FF4(S *s);
void func_002F7D70(S *s) { func_002F8FF4(s->f); }
