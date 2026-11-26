typedef struct { unsigned char pad[0x190]; int f; } T;
typedef struct { unsigned char pad[0x18]; T *p; } S;
void func_00248B50(S *s, int v) { s->p->f = v; }
