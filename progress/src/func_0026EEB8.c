typedef struct {
    u32 data[7];
} Local;

volatile int stub;
__attribute__((noinline)) s32 func_0026E690(void *p, Local *loc) {
    stub = (int)(u32)p;
    return stub;
}

extern s32 func_00285E14(Local *loc);

s32 func_0026EEB8(void *p) {
    Local local;
    s32 ret = 0;
    if (func_0026E690(p, &local) != 0) {
        ret = func_00285E14(&local);
    }
    return ret;
}
