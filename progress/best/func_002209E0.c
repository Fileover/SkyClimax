typedef struct { unsigned int f; } S;
extern S B_016D9E1C;
extern int B_016DA4FC;

volatile int stub;
__attribute__((noinline)) void func_002209B4(S *s) { stub = (int)s; }

void func_002209E0(u32 *out) {
    *out = 0;
    if (--B_016DA4FC == 0) {
        func_002209B4(&B_016D9E1C);
    }
}
