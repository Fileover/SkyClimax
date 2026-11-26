extern char STR_00459350[];
extern struct {
    u32 unk0;
    u32 unk4;
} B_016D9C98;

void func_0020CD54(u32);
void func_0020D1E0(u32, const char *);

s32 func_0020C27C(void) {
    u32 val = B_016D9C98.unk4;
    if (__builtin_expect(val == 0, 0)) {
        func_0020D1E0(0, STR_00459350);
        return -1;
    }
    func_0020CD54(val);
    return 0;
}
