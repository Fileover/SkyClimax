__attribute__((noinline)) static unsigned int func_0028227C(void) { return 0; }
__attribute__((noinline)) static int func_00282BAC(unsigned int a, unsigned int b, unsigned int c) { return 0; }

int func_00282D1C(void *a, void *b) {
    int ret;
    unsigned int next;
    unsigned int node = func_0028227C();
    unsigned int ua = (unsigned int)(unsigned long)a;
    unsigned int ub = (unsigned int)(unsigned long)b;
    while (1) {
        ret = func_00282BAC(ua, ub, node);
        if (ret == 1) break;
        next = *(unsigned int *)(node + 0x14);
        node = next;
        if (!next) break;
    }
    return ret;
}
