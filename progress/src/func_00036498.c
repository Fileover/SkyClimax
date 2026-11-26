/* identical to func_00036390 (matched), with its names changed by decompdecomp */
void *func_0003ADB4(void *, u32);
u32 func_000217B0(void *);
void func_0002496C(void *, u32, u32, u32);
void func_0003ADF4(void *, u32, u32, u32);

void func_00036498(void *a) {
    void *ret = func_0003ADB4(a, 0);
    if (ret != NULL) {
        func_0002496C(ret, func_000217B0(ret), 1, 0);
    }
    func_0003ADF4(a, 0, 1, 0);
}
