u32 func_00228884(u32 a, u32 b) {
    u32 rem = a % b;
    if (rem != 0) {
        a += b - rem;
    }
    return a;
}
