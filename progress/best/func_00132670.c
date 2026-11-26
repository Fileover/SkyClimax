struct S {
    char pad[0x50];
    u32 pad2 : 16;
    u32 bit : 1;
};

struct Container {
    u32 ptr;
    struct S fallback;
};

extern struct Container B_014976B8;

u32 func_00132670(void) {
    struct S *s;
    if (B_014976B8.ptr != 0) {
        s = (struct S *)(u64)B_014976B8.ptr;
    } else {
        s = &B_014976B8.fallback;
    }
    return s->bit;
}
