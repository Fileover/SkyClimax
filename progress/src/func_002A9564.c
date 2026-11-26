/* identical to func_002A94CC (matched), with its names changed by decompdecomp */
void *func_002A18D4(void *dest, const void *src, u32 n);

void *func_002A9564(void *dest, const void *src, u32 n) {
    return (char *)func_002A18D4(dest, src, n) + n;
}
