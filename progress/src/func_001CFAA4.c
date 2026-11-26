typedef struct {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
} Tm;

Tm *func_002A1704(const void *timer);

Tm *func_001CFAA4(const void *timer, Tm *result) {
    Tm *src = func_002A1704(timer);
    if (src != NULL && result != NULL) {
        *result = *src;
        return result;
    }
    return src;
}
