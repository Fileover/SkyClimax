/* identical to func_00220A34 (matched), with its names changed by decompdecomp */
extern s32 B_016DA504;

volatile int stub;
void func_002227B0(void *p) { stub = (int)(long)p; }

void func_002227DC(u32 *out) {
    u32 local;
    s32 count = B_016DA504 + 1;
    *out = 0;
    B_016DA504 = count;
    if (count == 1) {
        func_002227B0(&local);
        if (local != 0) {
            *out = local;
        }
    }
}
