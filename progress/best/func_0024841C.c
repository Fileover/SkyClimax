extern u32 D_004CC578[];

void func_0024841C(u32 *s) {
    u32 *p = s;
    *(u64 *)(s + 4) = 0;
    *++p = 0;
    p[1] = 0;
    p[2] = 0;
    *s = (u32)&D_004CC578;
}
