extern void *D_004CB290;

struct S {
    void *vptr;
    u32 unk4;
    u8 pad8[0x50 - 8];
    u32 unk50;
    u32 unk54;
    u32 unk58;
    u32 pad5c;
    u64 unk60;
    u64 unk68;
    u64 unk70;
    u64 unk78;
    u32 unk80;
    u32 unk84;
    u32 unk88;
    u32 unk8c;
    u32 unk90;
};

void func_0021FE48(struct S *s) {
    s->vptr = &D_004CB290;
    s->unk50 = 0;
    s->unk54 = 0;
    s->unk58 = 8;
    s->unk60 = 0x100000;
    s->unk68 = 0;
    s->unk70 = 0;
    s->unk78 = 0;
    s->unk80 = 0;
    s->unk4 = 0;
    s->unk84 = 0;
    s->unk88 = 0;
    s->unk8c = 0;
    s->unk90 = 0;
}
