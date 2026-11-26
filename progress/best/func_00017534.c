typedef struct { u32 a; u32 b; char pad[0x60]; } S;
extern S B_005FE794[];
int func_00017534(int i) { S *s = &B_005FE794[i]; return s->a ? s->b : 0; }
