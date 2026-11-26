/* identical to func_00122A5C (matched), with its names changed by decompdecomp */
void func_0006C328(void *);
void func_0006C22C(void *);
u8 func_0006BFA0(void *);
void func_0006C928(void *);

void func_001231BC(u8 *arg) {
    func_0006C328(arg);
    func_0006C22C(arg);
    if (!func_0006BFA0(arg + 0x158)) {
        func_0006C928(arg + 0x158);
    }
    if (!func_0006BFA0(arg + 0x17c)) {
        func_0006C928(arg + 0x17c);
    }
    arg[0x1a0] = 1;
}
