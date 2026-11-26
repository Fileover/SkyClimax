extern s32 D_004CC100[];
extern void func_00239D7C(void *);
extern void func_002F68B0(void *, int);
void func_0023BD0C(void *s) { *(u32 *)((char *)s + 0x0) = (u32)&D_004CC100; func_00239D7C(s); func_002F68B0(s, 4); }
