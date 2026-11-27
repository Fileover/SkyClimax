extern char B_00621A88[];
extern void func_002A18D4(void *dst, const void *src, u64 count);

void func_000693D0(const void *src, u64 count) {
    u64 addr = (u32)B_00621A88;
    func_002A18D4((void *)(addr + 0x1e4), src, count);
}
