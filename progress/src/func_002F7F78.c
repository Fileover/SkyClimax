/* identical to func_0020BB34 (matched), with its names changed by decompdecomp */
extern int dummy_glob;

__attribute__((noinline))
int func_002F7EE4(void *a, void *b) {
    dummy_glob = (int)a;
    return dummy_glob;
}

int func_002F7F78(void *a) {
    return func_002F7EE4(a, 0);
}
