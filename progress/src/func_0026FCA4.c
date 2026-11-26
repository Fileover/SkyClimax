/* identical to func_0026FC50 (matched), with its names changed by decompdecomp */
typedef struct {
    u32 unk0;
    void *target;
} S;

extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_0026AD04(void *target, s32 v);

void func_0026FCA4(S *s, s32 v) {
    func_0029186C();
    func_0026AD04(s->target, v);
    func_0029181C();
}
