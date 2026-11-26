/* identical to func_0024A46C (matched), with its names changed by decompdecomp */
typedef void (*Fn)(u32);
typedef struct { u64 a; } Obj;
volatile int dd_stub;
__attribute__((noinline)) void func_002511F0(u32 v) { dd_stub = v; }
void func_00251278(Obj *p) {
    u32 v = (u32)(u64)p;
    func_002511F0(v);
    if (p) {
        Fn *vt = *(Fn **)p;
        (*vt[1])(v);
    }
}
