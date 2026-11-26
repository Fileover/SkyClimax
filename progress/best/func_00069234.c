typedef struct {
    char pad[0x18];
    s32 val;
    char pad2[0x83dc - 0x1c];
    u8 flag;
} MyStruct;

extern MyStruct B_00621A88;

f32 func_00069234(void) {
    MyStruct *s = &B_00621A88;
    f32 res = (f32)s->val * 0.05f;
    if (s->flag) {
        return 0.0f;
    }
    return res;
}
