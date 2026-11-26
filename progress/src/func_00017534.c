typedef struct { u32 a; u32 b; char tail[0x60]; } S;
extern S B_005FE794[];
int func_00017534(int i) { S *s = &B_005FE794[i]; u32 *p = (u32 *)((char *)s + 4); return p[0] ? p[1] : 0; }
