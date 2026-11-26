struct Stream {
    char *buf;
    u32 len;
};

void func_002A18D4(void *buf, void *dst, u32 count);

u32 func_002A4954(u32 this_addr, void *dst, u32 size) {
    u32 count = (size < *(u32 *)(unsigned long)(this_addr + 4)) ? size : *(u32 *)(unsigned long)(this_addr + 4);
    if (count != 0) {
        struct Stream *this = (struct Stream *)(unsigned long)this_addr;
        func_002A18D4(this->buf, dst, count);
        this->buf += count;
        this->len -= count;
    }
    return this_addr;
}
