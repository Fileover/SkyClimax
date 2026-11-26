extern const char STR_00468848[];
extern const char STR_00468850[];
int func_002AC178(const void *, const char *, int);

int func_00290C68(const char *ptr) {
    if (func_002AC178(ptr, STR_00468848, 4) != 0) {
        return 0;
    }
    return (unsigned int)__builtin_clz(func_002AC178(ptr + 8, STR_00468850, 4)) >> 5;
}
