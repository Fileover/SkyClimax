extern char STR_0045DBF8[];
extern char STR_0045DC10[];
extern void *func_002F6AD8(u32, void *, const char *, u32);
extern void func_0020D028(u32, const char *, s32);

volatile int stub;
__attribute__((noinline)) void func_0023449C(void *s) { stub = (int)s; }

void *func_00234540(void *arg) {
    void *obj = func_002F6AD8(0x18, arg, STR_0045DBF8, 4);
    if (obj != NULL) {
        func_0023449C(obj);
    } else {
        func_0020D028(0, STR_0045DC10, -3);
        obj = NULL;
    }
    return obj;
}
