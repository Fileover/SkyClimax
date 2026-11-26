typedef struct {
    int pad0;
    union {
        char *ptr;
        char buf[16];
    } u;
    int pad1;
    unsigned int cap;
} String;

extern const char STR_004582F8[];
int func_002A4264(const char *str, const char *fmt, ...);

u32 func_001CF954(u32 out, const String *str) {
    int year;
    int month;
    int day;
    const char *s = (str->cap <= 15) ? str->u.buf : str->u.ptr;

    if (func_002A4264(s, STR_004582F8, &year, &month, &day) == 3) {
        *(int *)(out + 4) = month;
        *(int *)(out + 8) = day;
        *(int *)(out + 0) = year;
    } else {
        *(int *)(out + 8) = 1;
        *(int *)(out + 0) = 1900;
        *(int *)(out + 4) = 1;
    }
    return out;
}
