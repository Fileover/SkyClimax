extern char B_00621A88[];
extern void func_002A18D4(void *dst, void *src, void *count);
void func_00069404(void *a0, void *a1) {
    u64 addr = (u32)B_00621A88;
    func_002A18D4(a0, (void *)(addr + 0x1e4), a1);
}
