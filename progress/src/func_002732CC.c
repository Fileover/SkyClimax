void func_0029186C(void);
void func_0029181C(void);

volatile int stub_var;
__attribute__((noinline)) void func_00273268(void) { stub_var++; }

void func_002732CC(void) {
    func_0029186C();
    func_00273268();
    func_0029181C();
}
