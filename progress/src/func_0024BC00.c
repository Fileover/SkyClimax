extern s32 D_004CC6C0[];
extern void func_002499E0(void *);
extern void func_002F68B0(void *, int);
void func_0024BC00(void *s) { *(u32 *)((char *)s + 0x0) = (u32)&D_004CC6C0; func_002499E0(s); func_002F68B0(s, 0x58); }
