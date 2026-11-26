/* identical to func_00244BB8 (matched), with its names changed by decompdecomp */
typedef void (*Fn)(u32);
typedef struct { u64 a; } Obj;
volatile int dd_stub;
__attribute__((noinline)) void func_00245654(u32 v) { dd_stub = v; }
void func_00245718(Obj *p) {
    u32 v = (u32)(u64)p;
    func_00245654(v);
    if (p) {
        Fn *vt = *(Fn **)p;
        (*vt[5])(v);
    }
}
