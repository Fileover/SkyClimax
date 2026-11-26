extern char STR_003E8B80[];
s32_bool func_001508E4(void *);
s32_bool func_001520C0(void *, const char *);

s32 func_001305EC(void *arg0) {
    if (!func_001508E4(arg0)) {
        return func_001520C0(arg0, STR_003E8B80);
    }
    return 0;
}
