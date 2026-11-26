extern void *D_00571100[];

void *func_0020CA10(void *a, s32 b) __attribute__((noinline));
void *func_0020CA10(void *a, s32 b) {
    return a;
}

void *func_0020CAFC(void *arg0, s32 arg1) {
    if (arg1 > 24) {
        __builtin_memset(arg0, 0, 24);
        void *res = func_0020CA10(arg0, arg1);
        *(void **)res = D_00571100;
        return res;
    }
    return NULL;
}
