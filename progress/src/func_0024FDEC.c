typedef struct {
    char pad[0x2c];
    void *ptr;
} S;

u32 func_00248A74(void *);

u32 func_0024FDEC(S *s) {
    if (s->ptr != NULL) {
        return func_00248A74(s->ptr);
    }
    return 0;
}
