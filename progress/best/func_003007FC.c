extern void func_002AC594(void);
extern void func_0030068C(void);
extern void func_00300694(void);
extern void func_0030069C(void);

void func_003007FC(u8 cmd, u32 a, u32 b, u32 c) {
    if (cmd == 0x50) return;
    switch (cmd & 0xf) {
    case 0: func_0030068C(); break;
    case 1: func_00300694(); break;
    case 2: func_0030069C(); break;
    default: func_002AC594(); break;
    }
    (void)a; (void)b; (void)c;
}
