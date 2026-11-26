/* identical to func_0023F780 (matched), with its names changed by decompdecomp */
volatile int dd_stub;
__attribute__((noinline)) void func_0023F4D8(void *p, int n) { (void)p;(void)n; dd_stub = 1; }
typedef struct { u8 pad[0x60]; f32 f[5]; } S;
void func_0023F7A4(S *s) {
    f32 v = 0.70794576f;
    s->f[0] = v; s->f[1] = v; s->f[2] = v; s->f[3] = v; s->f[4] = v;
    func_0023F4D8(s, 3);
}
