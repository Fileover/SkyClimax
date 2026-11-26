extern int dummy_glob;

__attribute__((noinline))
int func_0020BA90(void *a, void *b) {
    dummy_glob = (int)a;
    return dummy_glob;
}

int func_0020BB34(void *a) {
    return func_0020BA90(a, 0);
}
