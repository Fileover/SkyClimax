/* identical to func_00168310 (matched), with its names changed by decompdecomp */
extern void func_00170A54(s32, s32, u32);
typedef struct {
    u8 pad[0xa6c];
    s32 field;
} S;

void func_0016834C(S *p, u64 a4, u64 a5) {
    if (p != 0) {
        func_00170A54(p->field, (s32)a4, (u32)a5);
    }
}
