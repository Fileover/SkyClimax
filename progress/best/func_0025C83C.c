extern void *D_004CCD20;
extern void *D_004CCD78;
extern void *D_004CCDD0;
extern void func_0023C8D0(void *);

void func_0025C83C(char *this) {
    char *orig = this;
    *(void **)this = &D_004CCD20;
    this += 0x12c;
    *(void **)this = &D_004CCD78;
    func_0023C8D0(this);
    this = orig;
    this += 0x18;
    *(void **)this = &D_004CCDD0;
    func_0023C8D0(this);
}
