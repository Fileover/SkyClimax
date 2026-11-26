/* identical to func_0024BA10 (matched), with its names changed by decompdecomp */
extern u32 D_004CC698[];

void func_00248DF8(void *a, u32 b, u32 c, u32 d);

void func_0024BBC0(u32 *a, u32 b, u32 c, u32 d) {
    func_00248DF8(a, b, c, d);
    *a = (u32)&D_004CC698;
    *(u32 *)((char *)a + 0x1c) = 0;
}
