void *func_002DCEE8(void);
void *func_002E19EC(void *, u32, u32);
void func_002DBD94(void *, u32);

void func_000D0B30(u32 *a) {
    void *ret1 = func_002DCEE8();
    void *ret2 = func_002E19EC(ret1, 0, *a);
    func_002DBD94(ret2, 0);
}
