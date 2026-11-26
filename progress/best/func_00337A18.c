extern char D_004CB194[];
extern char D_004CAF00[];
extern void func_002B47F8(void *);
extern void func_000F3ED0(void *);

void func_00337A18(char *p)
{
    char *orig = p;
    *(u32 *)p = (u32)(u64)D_004CB194;
    *(u32 *)(p + 4) = (u32)(u64)(D_004CB194 + 0x14);
    p += 4;
    *(u32 *)p = (u32)(u64)D_004CAF00;
    func_002B47F8(p);
    func_000F3ED0(orig);
}
