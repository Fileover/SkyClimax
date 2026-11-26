/* identical to func_0022F66C (matched), with its names changed by decompdecomp */
extern u32 B_016DACF0;

u32 func_00256E0C(void) {
    if (++B_016DACF0 == 0xFFFFFFFF) {
        B_016DACF0 = 0;
    }
    return B_016DACF0;
}
