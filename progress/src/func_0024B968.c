extern s32 D_004CC698[];
extern void func_002490E8(void *);
extern void func_002F68B0(void *, int);
void func_0024B968(void *s) { *(u32 *)((char *)s + 0x0) = (u32)&D_004CC698; func_002490E8(s); func_002F68B0(s, 0x20); }
