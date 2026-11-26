void func_00303608(void);
void func_00307B60(void *);
void func_00307A78(void *);
void func_002B3FA8(void *);
void func_00307978(void);
extern u32 D_004CD068;

void func_00010D84(void *p, s64 r4) {
    if (r4 != 1) func_00303608();
    func_00307B60(p);
    func_00307A78(p);
    func_002B3FA8((void *)0x70);
    func_00307978();
}
