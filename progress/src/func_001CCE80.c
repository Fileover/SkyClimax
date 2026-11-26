typedef struct {
    u32 pad0;
    union {
        char buf[16];
        char *ptr;
    } bx;
    u32 size;
    u32 res;
} StdString;

extern f64 func_002A6930(const char *, s32, s32);

f32 func_001CCE80(StdString *str) {
    const char *p = (str->res <= 15) ? str->bx.buf : str->bx.ptr;
    return (f32)func_002A6930(p, 0, 0);
}
