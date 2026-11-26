extern char B_00C5D9E8[];
void func_001496C4(void *);
void func_0014B514(void *);

void func_0009AFC8(int a, u32 b) {
    if (a == 1) {
        if (b == 0xffff) {
            func_001496C4(B_00C5D9E8 + 4);
        }
    } else if (a == 0) {
        if (b == 0xffff) {
            func_0014B514(B_00C5D9E8 + 4);
            return;
        }
    }
}
