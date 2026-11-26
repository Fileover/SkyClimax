typedef struct {
    u32 pad0;
    union {
        char buf[16];
        char *ptr;
    } bx;
    u32 size;
    u32 res;
} StdString;

extern u64 func_002A740C(const char *, void *, s32);

u32 func_001CCEC8(StdString *str, s32 base) {
    const char *p = (str->res <= 15) ? str->bx.buf : str->bx.ptr;
    return (u32)func_002A740C(p, NULL, base);
}
