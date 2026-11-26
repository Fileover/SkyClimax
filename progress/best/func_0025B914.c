extern s32 D_004CCCC0[];
extern void *D_004CCC90;

__attribute__((noinline)) void func_0025B8FC(u32 *s) { s[0] = (u32)&D_004CCCC0; }

void func_0025B914(u32 *this, u32 arg1) {
    u32 *p = this;
    func_0025B8FC(this);
    this[4] = arg1;
    *++p = 0;
    this[0] = (u32)&D_004CCC90;
    p[2] = 0;
    p[1] = 0;
    this[5] = 0;
}
