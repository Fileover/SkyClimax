extern void func_001FBC40(s32, s32);

s32 func_00014460(f32 x) {
    if (x > 0.0f) {
        if (x < 1.0f) {
            func_001FBC40(0, 1);
            return (s32)(x * 200.0f);
        }
        return 0;
    }
    return -960;
}
