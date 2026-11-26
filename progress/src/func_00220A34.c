extern s32 B_016DA4FC;

volatile int stub;
void func_00220A08(void *p) { stub = (int)(long)p; }

void func_00220A34(u32 *out) {
    u32 local;
    s32 count = B_016DA4FC + 1;
    *out = 0;
    B_016DA4FC = count;
    if (count == 1) {
        func_00220A08(&local);
        if (local != 0) {
            *out = local;
        }
    }
}
