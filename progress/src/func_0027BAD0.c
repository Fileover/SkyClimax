extern void * volatile B_016DB348[];

void func_0027BAD0(void *a, void *b) {
    if (a != NULL) {
        B_016DB348[1] = b;
        B_016DB348[0] = a;
    } else {
        B_016DB348[1] = NULL;
        B_016DB348[0] = NULL;
    }
}
