extern u8 B_00571B94;
extern void func_00304B24(void *) __attribute__((weak));
extern u32 D_00380E00;

typedef void (*InitFn)(void);
extern InitFn *D_005596E0;

void func_00010534(void) {
    if (__builtin_expect(!B_00571B94, 1)) {
        InitFn fn;
        while ((fn = *D_005596E0) != NULL) {
            D_005596E0++;
            fn();
        }
        if (func_00304B24) {
            func_00304B24(&D_00380E00);
        }
        B_00571B94 = 1;
    }
}
