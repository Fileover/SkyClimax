/* identical to func_002651B4 (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_00265070(void);

__attribute__((noinline)) void func_00264650(void) { func_0029186C(); }
__attribute__((noinline)) s32 func_0026570C(u32 x) { func_00265070(); return x; }
__attribute__((noinline)) void func_00264674(void) { func_0029181C(); }

s32 func_002659E4(u64 arg) {
    s32 ret;
    func_00264650();
    ret = func_0026570C((u32)arg);
    func_00264674();
    return ret;
}
