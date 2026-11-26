/* identical to func_00265174 (matched), with its names changed by decompdecomp */
extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_00265070(void);

__attribute__((noinline)) void func_0026CA60(void) { func_0029186C(); }
__attribute__((noinline)) u64 func_0026D688(u32 x) { func_00265070(); return x; }
__attribute__((noinline)) void func_0026CA84(void) { func_0029181C(); }

u64 func_0026D704(u64 arg) {
    u64 ret;
    func_0026CA60();
    ret = func_0026D688((u32)arg);
    func_0026CA84();
    return ret;
}
