/* identical to func_00241120 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(u32);
typedef struct { u64 a; } Obj;
volatile int dd_stub;
__attribute__((noinline)) void func_002433E8(u32 v) { dd_stub = v; }
void func_00243458(Obj *p) {
    u32 v = (u32)(u64)p;
    func_002433E8(v);
    if (p) {
        Fn *vt = *(Fn **)p;
        (*vt[2])(v);
    }
}
