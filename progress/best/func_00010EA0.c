extern char B_00571C24[];
extern void func_00150978(void *p);
extern void func_00150700(void *p);
void func_00010EA0(int a, u32 b) {
    if (a == 1) { if (b == 0xffff) func_00150978(B_00571C24 + 8); }
    else if (a == 0) { if (b == 0xffff) func_00150700(B_00571C24 + 8); }
}
