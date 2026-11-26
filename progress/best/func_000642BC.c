s32 func_000642BC(const char *str) {
    if (str == NULL) {
        return -1;
    }
    s32 b1 = (str[1] - '0') * 10 + (str[2] - '0');
    s32 b2 = (str[4] - '0') * 100 + (str[5] - '0') * 10 + (str[6] - '0');
    return ((u32)(u8)str[0] << 24) | ((b1 & 0xFF) << 16) | ((u32)(u8)str[3] << 8) | (b2 & 0xFF);
}
