extern void *D_004C9998;

typedef struct {
    void *vtable;
    s32 pad;
    u8 unk8;
    u8 pad9[3];
    s32 unkc;
    s32 unk10;
    s32 unk14;
} Struct_66848;

void func_00066848(Struct_66848 *s) {
    s->vtable = &D_004C9998;
    s->unk8 = 0;
    s->unk14 = 8;
    s->unk10 = 0;
    s->unkc = 0;
}
