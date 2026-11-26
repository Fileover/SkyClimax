/* identical to func_0020D938 (matched), with its names changed by decompdecomp */
extern char STR_00459678[];

void func_0021CFD0(s32 arg);
void func_0020D028(s32 a, const char *msg, s32 code);

s32 func_0020D9A4(s32 arg) {
    if (arg < -1 || arg > 0) {
        func_0020D028(0, STR_00459678, -2);
        return -2;
    }
    func_0021CFD0(arg);
    return 0;
}
