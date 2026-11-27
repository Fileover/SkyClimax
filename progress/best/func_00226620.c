extern char STR_0045C440[];
extern char STR_0045C448[];

volatile int stub;
__attribute__((noinline)) u32 func_002265B4(void *a, s32 b, const char *c) { stub = (u64)a; return stub; }
__attribute__((noinline)) s32 func_00226548(void *a, s32 b, const char *c) { stub = (u64)a; return stub; }

typedef struct {
    u8 pad[0xc];
    void *fc;
    u8 pad2[0x8];
    s32 f18;
} S;

s32 func_00226620(S *s, u32 *out1, u32 *out2, s32 index) {
    if (s->f18 < index) {
        *out1 = 0;
        *out2 = 0;
        return 0;
    }
    *out1 = func_002265B4(s->fc, index, STR_0045C440);
    *out2 = (u16)func_00226548(s->fc, index, STR_0045C448);
    return 1;
}
