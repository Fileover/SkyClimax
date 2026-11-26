volatile int stub;
__attribute__((noinline)) void func_00010270(void) { stub = 1; }
__attribute__((noinline)) void func_00010298(void) { stub = 2; }
extern void func_002A027C(void);
extern void func_0037F3FC(void);

void func_000102E4(void) {
    func_00010270();
    func_002A027C();
    func_0037F3FC();
    func_00010298();
}
