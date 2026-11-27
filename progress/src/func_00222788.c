/* identical to func_002209E0 (matched), with its names changed by decompdecomp */
typedef struct { unsigned int f; } S;
extern S B_016D9E1C;
extern int B_016DA504;

volatile int stub;
__attribute__((noinline)) void func_00222750(S *s) { stub = (int)s; }

void func_00222788(u32 *out) {
    *out = 0;
    if (--B_016DA504 == 0) {
        func_00222750(&B_016D9E1C);
    }
}
