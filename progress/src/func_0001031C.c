extern void dummy_fn(void);
__attribute__((noinline)) void func_00010298(void) {
    dummy_fn();
}

void sysPrxForUser_sysProcessExit(int);

void func_0001031C(int status) {
    func_00010298();
    sysPrxForUser_sysProcessExit(status);
}
