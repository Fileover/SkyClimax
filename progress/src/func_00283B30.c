/* identical to func_002651B4 (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_00265070(void);

__attribute__((noinline)) void func_00283AB4(void) { func_0029186C(); }
__attribute__((noinline)) s32 func_00283B08(u32 x) { func_00265070(); return x; }
__attribute__((noinline)) void func_00283A60(void) { func_0029181C(); }

s32 func_00283B30(u64 arg) {
    s32 ret;
    func_00283AB4();
    ret = func_00283B08((u32)arg);
    func_00283A60();
    return ret;
}
