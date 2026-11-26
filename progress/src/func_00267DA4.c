void func_0029186C(void);
void func_0029181C(void);

volatile int stub_var;
__attribute__((noinline)) void func_00267C5C(void) { stub_var++; }

void func_00267DA4(void) {
    func_0029186C();
    func_00267C5C();
    func_0029181C();
}
