extern u8 B_00571C50[];
extern void func_00015B90(void *, s32, s32, s32);
extern void func_00272C30(u32);

typedef struct {
    u32 flags;      /* 0x00, bit0 tested */
    u32 field_4;    /* 0x04 */
    u8 pad[0x31e4];
    s8 field_31ec;  /* 0x31ec */
} Entry;

void func_00016FB4(s32 cmd, s32 arg) {
    Entry *base = (Entry *)(B_00571C50 + 0xe0);
    Entry *e;
    if (cmd < 0) {
        cmd = 0;
        if (((base[0].flags << 1) >> 1) != 0) {} /* placeholder */
    }
    if (cmd > 2) cmd = 3;
    e = &base[cmd];
    if ((e->flags & 1) != 0) {
        func_00272C30(e->field_4);
        e->flags = 0;
    }
    func_00015B90(e, arg, 0, 0x10);
    (void)e->field_31ec;
}
