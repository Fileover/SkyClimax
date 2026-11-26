extern u32 func_002A1414(void *ptr, u32 size, u32 count, void *stream);
int abs(int);

void *func_002A91D0(void *stream, void *ptr, u32 count) {
    u32 ret = func_002A1414(ptr, 1, count, stream);
    s32 diff = count ^ ret;
    s32 mask = (abs(diff) - 1) >> 31;
    return (void *)((u64)stream & (s64)mask);
}
