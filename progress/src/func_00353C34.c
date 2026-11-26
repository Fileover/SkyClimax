u8 *func_00353C34(u64 dst, u8 *src) {
    u8 *p = (u8 *)dst;
    p[0] = src[0x20];
    p[1] = src[0x21];
    p[2] = src[0x22];
    p[3] = src[0x23];
    return p;
}
