/* identical to func_0025F784 (matched), with its names changed by decompdecomp */
extern void func_0025DBA4(void *p);

typedef struct {
    u8 pad[0x6e8];
    u32 field_6e8;
} S;

void func_0025FA44(S *s) {
    s->field_6e8 = 0;
    func_0025DBA4((void *)(u64)((u32)s + 0x74));
}
