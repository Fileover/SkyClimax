extern void *D_004CBC30;

void func_002343E4(void *timer, u32 arg) {
    u32 *p = (u32 *)timer;
    *(++p) = 0;
    p[2] = 0;
    p[1] = 0;
    ((u32 *)timer)[4] = arg;
    ((u32 *)timer)[5] = 0;
    ((u64 *)timer)[3] = 0;
    *(void **)timer = &D_004CBC30;
}
