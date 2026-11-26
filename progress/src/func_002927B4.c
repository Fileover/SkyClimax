extern u8 B_01714FC8[];
extern u32 B_016E8C20[];
void func_002AC0A0(void *, int, int);

void func_002927B4(void) {
    func_002AC0A0(B_01714FC8, 0, 0x100);
    B_016E8C20[8] = 0;
    B_016E8C20[9] = 0;
}
