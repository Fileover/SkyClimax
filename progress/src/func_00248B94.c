typedef struct { unsigned char pad[0x19c]; int f; } T;
typedef struct { unsigned char pad[0x18]; T *p; } S;
void func_00248B94(S *s, int v) { s->p->f = v; }
