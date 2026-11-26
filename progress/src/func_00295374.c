/* identical to func_002651B4 (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_00265070(void);

__attribute__((noinline)) void func_00294C70(void) { func_0029186C(); }
__attribute__((noinline)) s32 func_002951E4(u32 x) { func_00265070(); return x; }
__attribute__((noinline)) void func_00294C9C(void) { func_0029181C(); }

s32 func_00295374(u64 arg) {
    s32 ret;
    func_00294C70();
    ret = func_002951E4((u32)arg);
    func_00294C9C();
    return ret;
}
