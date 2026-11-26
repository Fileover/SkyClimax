/* identical to func_002A1244 (matched), with its names changed by decompdecomp */
typedef __builtin_va_list va_list;
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)

extern u32 D_00571450;
extern u32 D_004E1C28;

void func_002A7CF8(void *);
s32 func_002A95A0(void *, u32, u32, va_list);
void func_002A7C7C(void *);

s32 func_002A9138(u32 a, u32 b, ...) {
    va_list args;
    s32 ret;

    va_start(args, b);
    func_002A7CF8(&D_00571450);
    ret = func_002A95A0(&D_004E1C28, a, b, args);
    func_002A7C7C(&D_00571450);
    va_end(args);
    return ret;
}
