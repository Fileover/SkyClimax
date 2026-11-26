extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_00265070(void);

__attribute__((noinline)) void func_00264650(void) { func_0029186C(); }
__attribute__((noinline)) u64 func_002650DC(u32 x) { func_00265070(); return x; }
__attribute__((noinline)) void func_00264674(void) { func_0029181C(); }

u64 func_00265174(u64 arg) {
    u64 ret;
    func_00264650();
    ret = func_002650DC((u32)arg);
    func_00264674();
    return ret;
}
