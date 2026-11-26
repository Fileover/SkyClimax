extern const char STR_004639D8[];

void func_0029186C(void);
void func_0029181C(void);
void func_002926D4(const char *);
int func_0026A69C(u32);

typedef struct {
    int pad;
    u32 val;
} Obj;

int func_00270F68(Obj *p) {
    int ret = -1;
    func_0029186C();
    if (__builtin_expect(!p, 0)) {
        func_002926D4(STR_004639D8);
    } else {
        ret = func_0026A69C(p->val);
    }
    func_0029181C();
    return ret;
}
