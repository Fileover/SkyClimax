extern u32 D_004CBE78[];
extern u32 D_004CBEA0[];
void func_002F68B0(void *, u32);
void func_000F3ED0(u32);

struct Base {
    vu32 vtable;
    void * volatile data;
    u32 size;
};

void func_00349C9C(u32 s_in) {
    struct Base *s = (struct Base *)(u64)s_in;
    s->vtable = (u32)D_004CBE78;
    void *data = s->data;
    s->vtable = (u32)D_004CBEA0;
    if (data != NULL) {
        func_002F68B0(data, s->size * 4);
    }
    func_000F3ED0(s_in);
}
