extern char *func_002A4408(const char *str, int ch);
extern int func_002A9078(const char *s1, const char *s2);

int func_002241C0(const char *path, const char *ext) {
    char *dot = func_002A4408(path, 0x2e);
    if (dot == NULL) {
        return 0;
    }
    return (unsigned int)__builtin_clz(func_002A9078(dot, ext)) >> 5;
}
