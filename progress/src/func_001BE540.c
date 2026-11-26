extern char STR_00457880[];
extern char B_0153C1F0[];
extern void func_00152088(void *, void *, void *);
void func_001BE540(void) {
    u64 addr = (u32)B_0153C1F0;
    func_00152088((void *)(addr + 0x18), STR_00457880, (void *)0);
}
