typedef __builtin_va_list va_list;
#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)

extern u32 D_005713E8;
extern u32 D_004E1980;

void func_002A7CF8(void *);
s32 func_002A5FAC(void *, u32, u32, va_list);
void func_002A7C7C(void *);

s32 func_002A1244(u32 a, u32 b, ...) {
    va_list args;
    s32 ret;

    va_start(args, b);
    func_002A7CF8(&D_005713E8);
    ret = func_002A5FAC(&D_004E1980, a, b, args);
    func_002A7C7C(&D_005713E8);
    va_end(args);
    return ret;
}
