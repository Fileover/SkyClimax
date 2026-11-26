extern u32 D_004CBF88;
extern u32 D_004CBFB8;
extern void func_0023C8D0(void *);

typedef struct {
    u32 vt;
    u8 pad[0x3c];
    u32 count;   /* 0x40 */
} S;

void func_0034878C(S *p) {
    u32 *arr = (u32 *)((char *)p + 0x20);
    p->vt = D_004CBF88;
    if (p->count) {
        u32 n = p->count;
        if (n < 1) n = 1;
        for (u32 i = 0; i < n; i++) arr[i] = 0;
    }
    p->count = 0;
    p->vt = D_004CBFB8;
    func_0023C8D0(p);
}
