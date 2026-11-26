/* identical to func_0020D308 (matched), with its names changed by decompdecomp */
typedef __builtin_va_list va_list;
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)

s32 func_002A4264(s32, s32, va_list);

s32 func_0027B018(s32 a, s32 b, ...) {
    va_list args;
    va_start(args, b);
    s32 ret = func_002A4264(a, b, args);
    va_end(args);
    return ret;
}
