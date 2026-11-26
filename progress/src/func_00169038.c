void func_0016FB30(s32, u32);

void func_00169038(char *obj, u32 val) {
    if (obj != 0) {
        func_0016FB30(*(s32 *)(obj + 0xa6c), val);
        *(u32 *)(obj + 0x28c) = 0x3f800000;
        *(u32 *)(obj + 0x290) = 0x3f800000;
        *(u32 *)(obj + 0x294) = 0x3f800000;
    }
}
