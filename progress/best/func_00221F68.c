/* identical to func_00220A34 (matched), with its names changed by decompdecomp */
extern s32 B_016DA500;

volatile int stub;
void func_00221F3C(void *p) { stub = (int)(long)p; }

void func_00221F68(u32 *out) {
    u32 local;
    s32 count = B_016DA500 + 1;
    *out = 0;
    B_016DA500 = count;
    if (count == 1) {
        func_00221F3C(&local);
        if (local != 0) {
            *out = local;
        }
    }
}
