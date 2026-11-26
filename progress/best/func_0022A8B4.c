struct CueInfo {
    s32 field_0;
    s32 field_4;
    s32 field_8;
    s32 field_c;
    u8 field_10;
};

volatile int stub;
__attribute__((noinline)) s32 func_0022A0F4(void *a, void *b, struct CueInfo *info) { stub = (int)a; return stub; }

u32 func_0022A8B4(void *a, void *b, s32 *out) {
    struct CueInfo info;
    *out = 0;
    info.field_0 = 0;
    info.field_4 = 0;
    info.field_8 = 0;
    info.field_c = 0;
    info.field_10 = 0;

    if (!func_0022A0F4(a, b, &info)) {
        *out = -1;
        return 0;
    }
    return (u32)info.field_4;
}
