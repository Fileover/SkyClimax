typedef struct {
    char pad[0x1c];
    u32 field_0x1c;
} S;

void func_0025C2F8(u32);

void func_0025BA54(S *s, u32 *out) {
    *out = 0;
    func_0025C2F8(s->field_0x1c);
}
