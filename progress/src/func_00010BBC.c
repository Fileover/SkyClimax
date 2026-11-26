typedef struct { char pad[0x34]; u32 v; vu8 flag; } S;
extern S B_00571BB0;
extern void func_0006BB6C(void);
extern void func_001A69D8(void);
extern void func_000DF920(void);
extern void func_001AE6A0(void);
extern void func_000D5FD8(void);
void func_00010BBC(void) {
    if (B_00571BB0.v == 0xffffffff) B_00571BB0.flag = 1;
    func_0006BB6C(); func_001A69D8(); func_000DF920(); func_001AE6A0(); func_000D5FD8();
}
