extern s32 D_004CC610[];
extern void func_00261668(void *);
extern void func_002F68B0(void *, int);
void func_00249968(void *s) { *(u32 *)((char *)s + 0x0) = (u32)&D_004CC610; func_00261668(s); func_002F68B0(s, 0x54); }
