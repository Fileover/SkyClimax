extern void *func_001B98E4(u32, u32, u32);
extern void func_001B81E8(u32, void *, void *, void *, void *);
extern void func_001B8534(u32, u32);
extern u32 func_001B84D8(u32);
extern void func_002AC0A0(void *, u32, u32);
extern u32 D_004CE108, D_004CE110, D_004CE128, D_004CE130;

void func_00011318(void) {
    u32 p = (u32)func_001B98E4(0x10, 0x58, 1);
    func_001B81E8(p, &D_004CE128, &D_004CE130, &D_004CE110, &D_004CE108);
    func_001B8534(p, 1);
    p = func_001B84D8(p);
    func_002AC0A0((void *)p, 0, 0x58);
}
