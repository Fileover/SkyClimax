/* identical to func_00270F68 (matched), with its names changed by decompdecomp */
extern const char STR_00463A08[];

void func_0029186C(void);
void func_0029181C(void);
void func_002926D4(const char *);
int func_0026A6A8(u32);

typedef struct {
    int pad;
    u32 val;
} Obj;

int func_00270FD8(Obj *p) {
    int ret = -1;
    func_0029186C();
    if (__builtin_expect(!p, 0)) {
        func_002926D4(STR_00463A08);
    } else {
        ret = func_0026A6A8(p->val);
    }
    func_0029181C();
    return ret;
}
