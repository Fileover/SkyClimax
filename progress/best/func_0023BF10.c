extern char D_004CC100[];
extern void func_00239E34(void *);
extern void func_0023C844(void);

void func_0023BF10(void *this) {
    func_00239E34(this);
    *(void **)this = D_004CC100;
    func_0023C844();
}
