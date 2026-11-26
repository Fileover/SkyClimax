extern void func_000F3ED0(void *);
extern void *D_004CA9A8;

typedef struct {
    void *ptr;
    s32 refCount;
    s32 pad;
} Struct_B_014BCAF4;

extern Struct_B_014BCAF4 B_014BCAF4;

void func_00150388(void) {
    if (--B_014BCAF4.refCount == 0) {
        void *ptr = B_014BCAF4.ptr;
        if (ptr != NULL) {
            *(void **)ptr = &D_004CA9A8;
            func_000F3ED0(ptr);
        }
        B_014BCAF4.ptr = NULL;
    }
}
