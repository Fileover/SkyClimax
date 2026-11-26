extern const char STR_00462620[];
extern struct {
    char pad[0x18];
    u32 field_18;
} B_016DADB8;

void func_0027AC64(u32);
void func_0027DEE0(const char *);

void func_00268AE4(void) {
    if (B_016DADB8.field_18) {
        func_0027AC64(B_016DADB8.field_18);
        return;
    }
    func_0027DEE0(STR_00462620);
    func_0027AC64(B_016DADB8.field_18);
}
