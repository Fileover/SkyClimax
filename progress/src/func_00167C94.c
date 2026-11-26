extern u8 func_0016DCF4(s32);

typedef struct {
    u8 pad[0xa6c];
    s32 field;
} S;

s32 func_00167C94(S *s) {
    s32 r = 0;
    if (s) {
        r = func_0016DCF4(s->field);
    }
    return r;
}
