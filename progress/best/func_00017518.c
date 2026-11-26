typedef struct { char pad[0x60]; u8 a[8]; } S;
extern S B_005FE794[];
int func_00017518(int i) { return B_005FE794[i].a[0]; }
