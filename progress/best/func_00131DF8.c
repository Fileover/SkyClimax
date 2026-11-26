typedef struct {
    void *ptr;
} Container;
extern Container B_014976B8;

void func_00131DF8(f32 *out) {
    u8 *p = (u8 *)B_014976B8.ptr;
    if (p == NULL) {
        p = (u8 *)&B_014976B8 + 4;
    }
    if (out != NULL) {
        out[0] = *(f32 *)(p + 0x6c);
        out[1] = *(f32 *)(p + 0x70);
        out[2] = *(f32 *)(p + 0x74);
    }
}
