/* identical to func_001D68D4 (matched), with its names changed by decompdecomp */
typedef __builtin_va_list va_list;
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)

s32 func_002A48E4(s32, s32, s32, va_list);

s32 func_0020D354(s32 a, s32 b, s32 c, ...) {
    va_list args;
    va_start(args, c);
    s32 ret = func_002A48E4(a, b, c, args);
    va_end(args);
    return ret;
}
