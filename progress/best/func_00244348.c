extern u32 D_004CBDC8[];
extern u32 D_004CC420[];

typedef struct {
    volatile u32 vptr;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    char pad10[0x48];
    u32 unk58;
    char pad5C[0x48];
    u32 unkA4;
    u32 unkA8;
    u32 unkAC;
    u32 unkB0;
    char padB4[0x4];
    u32 unkB8;
    char padBC[0x4];
    u64 unkC0;
    u32 unkC8;
} S;

void func_00244348(S *s, u32 r4, u32 r5, u32 r6) {
    s->vptr = (u32)&D_004CBDC8;
    s->unk4 = r4;
    s->unk8 = r5;
    s->unkC = 0;
    s->unk58 = 0;
    s->unkA4 = 0;
    s->unkA8 = 0;
    s->unkAC = 0;
    s->unkB0 = 0;
    s->vptr = (u32)&D_004CC420;
    s->unkB8 = 0;
    s->unkC0 = (u64)-1;
    s->unkC8 = r6;
}
