extern u8 B_0153F850[];
extern u8 B_015CDA1C[];

extern u32 func_001DC694(void);
extern void func_001EEB84(u32);
extern void func_001EE14C(u32);
extern void func_001EDDFC(u32);
extern u32 func_001F0660(u32);

u32 func_001F12A4(void) {
    if ((u8)func_001DC694() != 0) {
        return func_001F0660((u32)B_015CDA1C);
    }
    if (*(u32 *)(B_0153F850 + 0x8E854) != 0) {
        func_001EEB84((u32)B_015CDA1C);
        func_001EE14C((u32)B_015CDA1C);
        func_001EDDFC((u32)B_015CDA1C);
    }
    return func_001F0660((u32)B_015CDA1C);
}
