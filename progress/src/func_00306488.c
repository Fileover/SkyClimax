/* identical to func_00306428 (matched), with its names changed by decompdecomp */
extern u32 D_004CDAB8[];
extern void func_000F3ED0(u32 *);

void func_00306478(u32 *s);

void func_00306488(u32 *s) {
    s[0] = (u32)&D_004CDAB8;
    func_00306478(s);
    func_000F3ED0(s);
}

volatile int stub;
void func_00306478(u32 *s) { stub = (int)(long)s; }
