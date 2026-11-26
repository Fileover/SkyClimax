typedef struct {
    void *cs;
    volatile int count;
    int field_8;
    int pad_c;
    char buffer[0x20];
} B_Struct;

extern B_Struct B_016E8BE8;
void *func_0027AE70(void *, int);
void func_0027DEE0(const char *);
extern const char STR_00468928[];

void func_00291924(void) {
    B_016E8BE8.count++;
    if (B_016E8BE8.count == 1) {
        void *ret;
        B_016E8BE8.field_8 = 0;
        ret = func_0027AE70(B_016E8BE8.buffer, 0x20);
        B_016E8BE8.cs = ret;
        if (!ret) {
            func_0027DEE0(STR_00468928);
        }
    }
}
