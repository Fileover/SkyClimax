typedef struct {
    u32 pad0;
    union {
        char buf[16];
        char *ptr;
    } bx;
    u32 size;
    u32 res;
} StdString;

extern s32 func_002A4030(const char *, const char *);

s32 func_001C10C8(const StdString *str1, const StdString *str2) {
    const char *p1 = (str1->res <= 15) ? str1->bx.buf : str1->bx.ptr;
    const char *p2 = (str2->res <= 15) ? str2->bx.buf : str2->bx.ptr;
    return func_002A4030(p1, p2);
}
