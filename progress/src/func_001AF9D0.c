extern char B_014FF7A0[];
extern void func_00151ACC(void *);
void func_001AF9D0(void) {
    u64 addr = (u32)B_014FF7A0;
    func_00151ACC((void *)(addr + 0xcd8));
}
