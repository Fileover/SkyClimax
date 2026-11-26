typedef struct {
    char pad[0x84];
    void *unk84;
    void *unk88;
    void *unk8C;
    char pad90[0x1C];
    void *unkAC;
    char padB0[0x30];
    void *unkE0;
    char padE4[0x30];
    void *unk114;
    char pad118[0x30];
    void *unk148;
} S;

void func_0012929C(void *);
void func_000850C4(void *, s32);
void func_0007D530(void *);

void func_0007209C(S *s) {
    if (__builtin_expect(s->unk84 != NULL, 0)) {
        func_0012929C(s->unk84);
    }
    if (__builtin_expect(s->unk88 != NULL, 0)) {
        func_0012929C(s->unk88);
    }
    if (__builtin_expect(s->unk8C != NULL, 0)) {
        func_0012929C(s->unk8C);
    }
    func_000850C4(s->unkAC, 0);
    func_000850C4(s->unkE0, 0);
    func_000850C4(s->unk114, 0);
    func_0007D530(s->unk148);
}
