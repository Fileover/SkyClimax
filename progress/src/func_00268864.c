volatile int stub;
__attribute__((noinline)) void func_002686D8(unsigned int a) { stub = a; }
extern void func_0029186C(u64);
extern void func_0029181C();

void func_00268864(u64 p) {
    func_0029186C(p);
    func_002686D8((u32)p);
    func_0029181C();
}
