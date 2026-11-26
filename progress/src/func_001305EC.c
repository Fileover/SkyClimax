extern char STR_003E8B80[];
u8 func_001508E4(void *);
u8 func_001520C0(void *, const char *);

s32 func_001305EC(void *arg0) {
    if (!func_001508E4(arg0)) {
        return func_001520C0(arg0, STR_003E8B80);
    }
    return 0;
}
