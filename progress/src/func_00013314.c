extern s32 func_001B73E4(f32);

typedef struct { u32 pad; f32 val; } Out;

volatile int stub_13120;
__attribute__((noinline)) u32 func_00013120(void *p, s32 a, s32 b) { stub_13120 = a + b; return 0; }

s32 func_00013314(s32 arg) {
    Out o;
    u8 ok = func_00013120(&o, arg, 0);
    s32 ret = 0;
    if (ok) {
        ret = func_001B73E4(o.val);
    }
    return ret;
}
