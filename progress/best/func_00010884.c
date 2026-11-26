extern int B_00571BB0[];
extern int func_000ED3E0(void);

int func_00010884(void) {
    if (B_00571BB0[13] != 0) {
        return 1;
    }
    return func_000ED3E0() == 9;
}
