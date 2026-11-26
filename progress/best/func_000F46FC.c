extern u32 B_0115C8E0[];

typedef struct { u32 x[7]; } Seven;

void *func_000F46FC(u32 *a) {
    Seven *src = (Seven *)((u8 *)B_0115C8E0 + 0x303c);
    if (a) {
        *(Seven *)a = *src;
    }
    return src;
}
