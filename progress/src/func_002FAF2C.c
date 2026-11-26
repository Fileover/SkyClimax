/* identical to func_00228884 (matched), with its names changed by decompdecomp */
u32 func_002FAF2C(u32 a, u32 b) {
    u32 rem = a % b;
    if (rem != 0) {
        a += b - rem;
    }
    return a;
}
