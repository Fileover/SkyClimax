/* identical to func_0020BB34 (matched), with its names changed by decompdecomp */
extern int dummy_glob;

__attribute__((noinline))
int func_0021EDE8(void *a, void *b) {
    dummy_glob = (int)a;
    return dummy_glob;
}

int func_0021EF5C(void *a) {
    return func_0021EDE8(a, 0);
}
