extern s32 D_004CC038[];
extern void func_00239DDC(void *);

volatile int stub;
__attribute__((noinline)) void func_0023BD84(void *s) { stub = (int)s; }

void func_0023BE38(void *s) {
    *(u32 *)((char *)s + 0x0) = (u32)&D_004CC038[0];
    *(u32 *)((char *)s + 0x4) = (u32)&D_004CC038[0] + 0x64;
    func_00239DDC((char *)s + 4);
    func_0023BD84(s);
}
