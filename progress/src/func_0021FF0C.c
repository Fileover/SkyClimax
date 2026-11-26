typedef struct {
    unsigned char pad1[0x68];
    u64 val;
    unsigned char pad2[0x8c - 0x68 - 8];
    s32 flag;
} S;

u64 func_0021FF0C(S *s) {
    if (s->flag != 0) {
        return s->val;
    }
    return 0;
}
