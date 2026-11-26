extern s32 D_004CC670[];
extern void func_002490DC(void *);
extern void func_002F68B0(void *, int);
void func_0024B51C(void *s) { *(u32 *)((char *)s + 0x0) = (u32)&D_004CC670; func_002490DC(s); func_002F68B0(s, 0x4c); }
