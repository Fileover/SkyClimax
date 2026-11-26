extern void *func_001B89E4(int);
extern void func_00011318(int);

void func_000113A0(u64 p) {
    void *v = func_001B89E4(0x10);
    if (v == NULL) {
        func_00011318(0);
        v = func_001B89E4(0x10);
    }
    if (v != NULL) {
        *(u32 *)((char *)v + 8) = (u32)p;
    }
}
