/* identical to func_00168458 (matched), with its names changed by decompdecomp */
extern void func_0016D518(s32, s32);
typedef struct {
    u8 pad[0xa6c];
    s32 field;
} S;

void func_00168560(S *p, u64 a4) {
    if (p != 0) {
        func_0016D518(p->field, (s32)a4);
    }
}
