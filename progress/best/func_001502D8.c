extern void *D_004CA9A8;

typedef struct {
    void *instance;
    s32 count;
} Manager;

extern Manager B_014BCAF4;

void *func_000F4140(u32);

void func_001502D8(void) {
    if (B_014BCAF4.count == 0) {
        char *obj = (char *)func_000F4140(0x328);
        *(void **)obj = &D_004CA9A8;
        *(u32 *)(obj + 0x318) = 0;
        *(u32 *)(obj + 0x31c) = 0;
        *(char **)(obj + 0x10) = obj + 4;
        *(u32 *)(obj + 0x14) = 0;
        *(char **)(obj + 8) = obj + 4;
        **(char ***)(obj + 0x10) = obj + 4;
        *(u8 *)(obj + 0x324) = 0;
        *(u32 *)(obj + 0x320) = 0;
        B_014BCAF4.instance = obj;
    }
    B_014BCAF4.count++;
}
