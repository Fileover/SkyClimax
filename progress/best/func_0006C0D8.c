extern char B_00629FA8[];
void func_00150978(void *);
void func_00150700(void *);

void func_0006C0D8(int a, u32 b) {
    if (a == 1) {
        if (b == 0xffff) {
            func_00150978(B_00629FA8);
        }
    } else if (a == 0) {
        if (b == 0xffff) {
            func_00150700(B_00629FA8);
            return;
        }
    }
}
