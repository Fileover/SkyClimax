/* identical to func_00143AAC (matched), with its names changed by decompdecomp */
void func_001496C4(void *);
void func_002AC0A0(void *, int, u32);

void func_00143B08(char *s) {
    char *p = s + 0x5a;
    func_001496C4(s);
    s[0x58] = 0;
    func_002AC0A0(p, 0, 0x20000);
}
