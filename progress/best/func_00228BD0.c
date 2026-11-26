extern s32 func_00217F80(s32 a, s32 *b);

s32 func_00228BD0(s32 *a, s32 *b) {
    s32 local;
    *b = func_00217F80(a[1], &local);
    return local;
}
