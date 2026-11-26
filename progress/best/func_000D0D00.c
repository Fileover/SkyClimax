extern void *D_004CA4C0;
extern void *func_000F4140(u32);

void func_000D0D00(void *p) {
    void *obj = func_000F4140(4);
    *(void **)((char *)p + 0x18) = obj;
    *(void **)obj = &D_004CA4C0;
}
