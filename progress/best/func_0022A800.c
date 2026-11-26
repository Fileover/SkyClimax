typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u32 field_c;
    u8 field_10;
} Local;

s32 func_0022A0F4(void *a, void *b, Local *c) __attribute__((noinline));
s32 func_0022A0F4(void *a, void *b, Local *c) {
    return *(s32 *)a;
}

s32 func_00229370(void *a, Local *b, s32 *c) __attribute__((noinline));
s32 func_00229370(void *a, Local *b, s32 *c) {
    *c = 0;
    return b->field_10 & 1;
}

s32 func_0022A800(void *arg0, void *arg1, s32 *arg2) {
    Local local;
    *arg2 = 0;
    local.field_0 = 0;
    local.field_4 = 0;
    local.field_8 = 0;
    local.field_c = 0;
    local.field_10 = 0;

    if (!func_0022A0F4(arg0, arg1, &local)) {
        *arg2 = -1;
        return 0;
    }
    return func_00229370(arg0, &local, arg2);
}
