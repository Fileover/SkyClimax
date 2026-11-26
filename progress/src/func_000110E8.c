extern void func_000D1530(void);
extern void func_0006A17C(void);
extern void func_0006842C(void);
extern void func_001513E8(void);

typedef void (*Fn)(void);
typedef struct { Fn fn; u8 pad[16]; } S;
extern S B_00571C24;

s32 func_000110E8(void) {
    func_000D1530();
    func_0006A17C();
    func_0006842C();
    func_001513E8();
    Fn f = B_00571C24.fn;
    if (f) f();
    return B_00571C24.fn != 0;
}
