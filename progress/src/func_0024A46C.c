typedef void (*Fn)(u32);
typedef struct { u64 a; } Obj;
volatile int dd_stub;
__attribute__((noinline)) void func_00249D28(u32 v) { dd_stub = v; }
void func_0024A46C(Obj *p) {
    u32 v = (u32)(u64)p;
    func_00249D28(v);
    if (p) {
        Fn *vt = *(Fn **)p;
        (*vt[1])(v);
    }
}
