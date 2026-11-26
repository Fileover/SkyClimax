/* identical to func_0015E2B0 (matched), with its names changed by decompdecomp */
struct Sub {
    char pad[0x10];
};

struct SubStruct {
    struct Sub arr[32];
    struct Sub extra;
    char pad[0x318 - 0x210];
    void *ptr;
};

extern void func_00018BC8(void *);
extern void func_001A481C(void *);

void func_00162510(char *s) {
    struct SubStruct *sub = (struct SubStruct *)(s + 0xac);
    struct Sub *p = sub->arr;
    int i;

    for (i = 0; i < 32; i++) {
        func_00018BC8(p);
        p++;
    }

    func_00018BC8(&sub->extra);
    if (sub->ptr != 0) {
        func_001A481C(&sub->ptr);
        sub->ptr = 0;
    }
}
