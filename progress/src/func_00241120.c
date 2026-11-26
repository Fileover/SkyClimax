typedef void (*Fn)(u32);
typedef struct { u64 a; } Obj;
volatile int dd_stub;
__attribute__((noinline)) void func_0024105C(u32 v) { dd_stub = v; }
void func_00241120(Obj *p) {
    u32 v = (u32)(u64)p;
    func_0024105C(v);
    if (p) {
        Fn *vt = *(Fn **)p;
        (*vt[2])(v);
    }
}
