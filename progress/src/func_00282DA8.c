int func_00282D1C(void *a, void *b) { *(volatile int *)b = 0; return 0; }
int func_00282DA8(void *a) {
    int t;
    return func_00282D1C(a, &t);
}
