typedef struct {
    u8 pad[8];
    u32 val;
} Dest;

void func_002F9ABC(void *a, const u8 *src, void *c, Dest *dst) {
    dst->val = (src[0] << 24) | (src[1] << 16) | (src[2] << 8) | src[3];
}
