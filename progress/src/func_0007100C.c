extern void func_0006BCF8(void *);
typedef struct { u32 f; } S;
extern S B_00629FC4[];
void func_0007100C(void) {
    func_0006BCF8((void *)(u64)B_00629FC4[0].f);
    B_00629FC4[0].f = 0;
}
