void *func_002A18D4(void *dest, const void *src, u32 n);

void *func_002A94CC(void *dest, const void *src, u32 n) {
    return (char *)func_002A18D4(dest, src, n) + n;
}
