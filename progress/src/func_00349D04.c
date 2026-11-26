extern u32 D_004CBE78[];
extern u32 D_004CBEA0[];
void func_002F68B0(void *, u32);

struct Base {
    vu32 vtable;
    void * volatile data;
    u32 size;
};

void func_00349D04(struct Base *s) {
    s->vtable = (u32)D_004CBE78;
    void *data = s->data;
    s->vtable = (u32)D_004CBEA0;
    if (data != NULL) {
        func_002F68B0(data, s->size * 4);
    }
}
