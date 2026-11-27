/* identical to func_002209E0 (matched), with its names changed by decompdecomp */
typedef struct { unsigned int f; } S;
extern S B_016D9E1C;
extern int B_016DA500;

volatile int stub;
__attribute__((noinline)) void func_00221EE8(S *s) { stub = (int)s; }

void func_00221F14(u32 *out) {
    *out = 0;
    if (--B_016DA500 == 0) {
        func_00221EE8(&B_016D9E1C);
    }
}
