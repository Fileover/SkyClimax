/* identical to func_00300614 (matched), with its names changed by decompdecomp */
const u8 *func_00303AC4(const u8 *p, s64 *val) {
    u32 shift = 0;
    s64 result = 0;
    u8 byte;

    do {
        byte = *p++;
        result |= (s64)(byte & 0x7f) << shift;
        shift += 7;
    } while ((s8)byte < 0);

    if (shift < 64 && (byte & 0x40)) {
        result |= ((s64)-1) << shift;
    }

    *val = result;
    return p;
}
