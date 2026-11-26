extern void func_001708CC(s32, s32, u32);
typedef struct {
    u8 pad[0xa6c];
    s32 field;
} S;

void func_00168310(S *p, u64 a4, u64 a5) {
    if (p != 0) {
        func_001708CC(p->field, (s32)a4, (u32)a5);
    }
}
