void func_00010EA0(int a, u16 b) { *(volatile int *)0 = a + b; }

void func_00010F24(void) {
    func_00010EA0(0, (u16)-1);
}
