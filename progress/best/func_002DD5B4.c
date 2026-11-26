extern vu32 B_016EB684[];
void func_002DD5B4(int a, u32 b) {
    if (a == 1 && b == 0xffff) {
        vu32 *p = B_016EB684;
        p[0] = 0;
        p[1] = 0;
    }
}
