extern u32 *B_016DB1F8;
u32 func_00274060(u32 v) {
    u32 old = *B_016DB1F8;
    *B_016DB1F8 = v;
    return old;
}
