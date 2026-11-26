extern u8 B_0153F850[];
extern u8 B_015CDA1C[];

extern void func_00342600(u32, u32, u32, u32);
extern void func_001EEB84(u32);
extern void func_001EE14C(u32);
extern void func_001EDDFC(u32);
extern void func_001F0988(void *, u32);

void func_001F1340(u32 a, u32 b, u32 c) {
    func_00342600((u32)B_015CDA1C, a, b, c);
}

void func_001F13A8(u32 *a, u32 *b) {
    int i = *(int *)(B_0153F850 + 0xb8) - 1;
    if (i < 0) {
        i = *(int *)(B_0153F850 + 0xb4) - 1;
    }
    if (a) {
        *a = *(u32 *)(B_0153F850 + i * 4 + 0xd4);
    }
    if (b) {
        *b = *(u32 *)(B_0153F850 + 0xc4);
    }
}

void func_001F13FC(u32 a, u32 b) {
    if (a) *(u32 *)(B_0153F850 + 0x18E3F0) = a;
    if (b) *(u32 *)(B_0153F850 + 0x18E3F4) = b;
}

s32 func_001F142C(u32 *p) {
    s32 r = 0;
    if (p != 0) {
        u32 v = *(u32 *)(B_0153F850 + 0x14c);
        if (v != 0) {
            r = 1;
            *p = v;
        }
    }
    return r;
}

void func_001F1228(void *p, u32 x) {
    if (*(u32 *)((u8 *)p + 0x688) != 0) {
        func_001EEB84((u32)p);
        func_001EE14C((u32)p);
        func_001EDDFC((u32)p);
        if (x != 0) {
            func_001F0988(p, x);
        }
    }
}
