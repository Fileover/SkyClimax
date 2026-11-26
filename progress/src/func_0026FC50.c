typedef struct {
    u32 unk0;
    void *target;
} S;

extern void func_0029186C(void);
extern void func_0029181C(void);
extern void func_0026A740(void *target, s32 v);

void func_0026FC50(S *s, s32 v) {
    func_0029186C();
    func_0026A740(s->target, v);
    func_0029181C();
}
