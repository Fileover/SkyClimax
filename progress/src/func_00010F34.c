void func_00010EA0(int a, u16 b) { *(volatile int *)0 = a + b; }

void func_00010F34(void) {
    func_00010EA0(1, (u16)-1);
}
