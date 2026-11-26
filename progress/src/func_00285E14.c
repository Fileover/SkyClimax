/* identical to func_0026EEB8 (matched), with its names changed by decompdecomp */
typedef struct {
    u32 data[7];
} Local;

volatile int stub;
__attribute__((noinline)) s32 func_002846C4(void *p, Local *loc) {
    stub = (int)(u32)p;
    return stub;
}

extern s32 func_002876F4(Local *loc);

s32 func_00285E14(void *p) {
    Local local;
    s32 ret = 0;
    if (func_002846C4(p, &local) != 0) {
        ret = func_002876F4(&local);
    }
    return ret;
}
