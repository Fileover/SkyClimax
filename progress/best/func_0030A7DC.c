extern u32 D_004C9960[];
extern u32 D_004C9978[];
void func_00154560(void *);
void func_002B3FB4(void *);
void func_000F3ED0(void *);

typedef struct {
    u32 unk0;
    union {
        char buf[16];
        void *ptr;
    } data;
    u32 size;
    u32 cap;
} StdString;

typedef struct {
    u32 *vptr;
    StdString str;
} S;

void func_0030A7DC(S *s) {
    volatile u32 *v = (volatile u32 *)s;
    v[0] = (u32)D_004C9960;
    v[0] = (u32)D_004C9978;
    StdString *str = &s->str;
    void *p1 = s;
    void *p2 = s;
    if (str->cap > 0xf) {
        func_00154560(str->data.ptr);
    }
    str->cap = 0xf;
    str->data.buf[0] = 0;
    str->size = 0;
    func_002B3FB4(p1);
    func_000F3ED0(p2);
}
