extern void func_0025DC14(void *p);

typedef struct {
    u8 pad[0x6e8];
    u32 field_6e8;
} S;

void func_0025F784(S *s) {
    s->field_6e8 = 0;
    func_0025DC14((void *)(u64)((u32)s + 0x74));
}
