extern char D_004CCAA8[];
void func_002F68B0(u32 *p, int n);

void func_00254E40(u32 *p) {
    u32 *q = p;
    *q = (u32)(u64)D_004CCAA8;
    func_002F68B0(q, 0xc);
}
