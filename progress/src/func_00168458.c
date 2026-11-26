extern void func_0016C92C(s32, s32);
typedef struct {
    u8 pad[0xa6c];
    s32 field;
} S;

void func_00168458(S *p, u64 a4) {
    if (p != 0) {
        func_0016C92C(p->field, (s32)a4);
    }
}
