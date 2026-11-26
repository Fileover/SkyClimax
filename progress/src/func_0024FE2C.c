/* identical to func_0024FDEC (matched), with its names changed by decompdecomp */
typedef struct {
    char pad[0x2c];
    void *ptr;
} S;

u32 func_00248A68(void *);

u32 func_0024FE2C(S *s) {
    if (s->ptr != NULL) {
        return func_00248A68(s->ptr);
    }
    return 0;
}
