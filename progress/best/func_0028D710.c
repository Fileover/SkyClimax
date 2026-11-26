typedef struct {
    u8 pad[0x2ac];
    u32 crit_sections[];
} GlobalContext;

extern GlobalContext B_016E87E8;
extern const char D_00468388[];
extern const char D_004683D8[];

extern volatile int D_dummy;
static void __attribute__((noinline)) func_0028D64C(const char *msg) {
    D_dummy = 1;
}

int func_0027AB7C(u32);
void func_0027DEE0(const char *);

void func_0028D710(s32 svtype) {
    if ((u32)svtype > 7) {
        func_0028D64C(D_00468388);
    }
    if (func_0027AB7C(B_016E87E8.crit_sections[svtype]) < 0) {
        func_0027DEE0(D_004683D8);
    }
}
