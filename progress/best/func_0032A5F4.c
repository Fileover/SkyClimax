extern char D_004CAED4[];
extern char D_004CAF00[];
extern void func_002B47F8(void *);

void func_0032A5F4(char *p)
{
    *(u32 *)p = (u32)(u64)D_004CAED4;
    *(u32 *)(p + 8) = (u32)(u64)(D_004CAED4 + 0x14);
    p += 8;
    *(u32 *)p = (u32)(u64)D_004CAF00;
    func_002B47F8(p);
}
