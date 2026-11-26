typedef struct {
    u32 pad0;
    union {
        char buf[16];
        char *ptr;
    } bx;
    u32 size;
    u32 res;
} StdString;

extern s64 func_002A47FC(const char *, void *, s32);

s32 func_001CCBD8(StdString *str, s32 base) {
    const char *p = (str->res <= 15) ? str->bx.buf : str->bx.ptr;
    return (s32)func_002A47FC(p, NULL, base);
}
