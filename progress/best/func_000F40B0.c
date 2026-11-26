extern u32 (*D_00565694)();
extern void *func_0030770C(int);
extern u64 func_00308CF0(u32, void *, void *);
extern void func_00303608(void);
extern void func_0030854C(u32);
extern char D_004CA688[];
extern char D_004CA674[];
extern char D_004D2FD8[];

u32 func_000F40B0(void) {
    u32 r = D_00565694();
    if (r) {
        return r;
    }
    void **p = (void **)func_0030770C(4);
    *p = D_004CA688;
    if (func_00308CF0((u32)p, D_004CA674, D_004D2FD8) != 0xffffffffu) {
        func_00303608();
    }
    func_0030854C((u32)p);
}
