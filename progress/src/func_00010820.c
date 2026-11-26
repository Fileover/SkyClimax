extern s32 D_00571BB0[];

int func_00010820(float *out) {
    if (!out) {
        return 1;
    }
    out[0] = ((float *)D_00571BB0)[15];
    out[1] = ((float *)D_00571BB0)[16];
    return 1;
}
