extern const char STR_0045A5D8[];
extern void func_0020D028(s32, const char *, s32);

struct Struct_214 {
    char pad[0x214];
    s32 field_214;
};

void *func_00217BB4(u32 id) { return 0; }

s32 func_00217F80(u32 id, s32 *out) {
    struct Struct_214 *ptr = (struct Struct_214 *)func_00217BB4(id);
    if (__builtin_expect(ptr == NULL, 0)) {
        if (out != NULL) {
            *out = -1;
        }
    } else if (out != NULL) {
        *out = ptr->field_214;
        return 0;
    }
    func_0020D028(0, STR_0045A5D8, -2);
    return -2;
}
