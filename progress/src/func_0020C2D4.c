/* identical to func_0020C27C (matched), with its names changed by decompdecomp */
extern char STR_00459378[];
extern struct {
    u32 unk0;
    u32 unk4;
} B_016D9C98;

void func_0020CD98(u32);
void func_0020D1E0(u32, const char *);

s32 func_0020C2D4(void) {
    u32 val = B_016D9C98.unk4;
    if (__builtin_expect(val == 0, 0)) {
        func_0020D1E0(0, STR_00459378);
        return -1;
    }
    func_0020CD98(val);
    return 0;
}
