/* identical to func_00303A8C (matched), with its names changed by decompdecomp */
const u8 *func_00307E40(const u8 *p, u64 *val) {
    u32 shift = 0;
    u64 result = 0;
    u8 byte;

    do {
        byte = *p++;
        result |= (u64)(byte & 0x7f) << shift;
        shift += 7;
    } while ((s8)byte < 0);

    *val = result;
    return p;
}
