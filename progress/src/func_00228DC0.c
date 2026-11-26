extern int func_00217DE0();

int func_00228DC0(void *a, int *b) {
    int t;
    *b = 0;
    if (func_00217DE0(((void **)a)[1], &t) != 0) {
        t = -1;
    }
    return t;
}
