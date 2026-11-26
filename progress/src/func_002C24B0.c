/* identical to func_002C2494 (matched), with its names changed by decompdecomp */
u32 func_002C24B0(u32 x) {
    if ((x & 0x7f) != 0)
        x = (x & ~0x7f) + 0x80;
    return x;
}
