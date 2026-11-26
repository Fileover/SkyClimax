/* identical to func_000E3C50 (matched), with its names changed by decompdecomp */
void func_0006C328(void *);
void func_0006C22C(void *);
u8 func_0006BFA0(void *);
void func_0006C928(void *);

void func_000E43C0(u8 *arg) {
    func_0006C328(arg);
    func_0006C22C(arg);
    if (!func_0006BFA0(arg + 0x15c)) {
        func_0006C928(arg + 0x15c);
    }
    if (!func_0006BFA0(arg + 0x180)) {
        func_0006C928(arg + 0x180);
    }
    arg[0x1a4] = 1;
}
