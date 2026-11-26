typedef struct { u8 pad[0x18E3F0]; u32 f0; u32 f1; } Big;
extern Big B_0153F850;

void func_001F13FC(u32 a, u32 b) {
    if (a) B_0153F850.f0 = a;
    if (b) B_0153F850.f1 = b;
}

typedef struct { u8 pad[0x14c]; u32 f14c; } S14c;
extern S14c B_0153F850_;

s32 func_001F142C(u32 *p) {
    s32 r = 0;
    if (p != 0) {
        u32 v = B_0153F850_.f14c;
        if (v != 0) {
            r = 1;
            *p = v;
        }
    }
    return r;
}

typedef struct { u8 pad[0xb4]; u32 fb4; u32 fb8; u8 pad2[8]; u32 fc4; u8 pad3[8]; u32 arr[1]; } SB;
extern SB B_0153F850__;

void func_001F13A8(u32 *a, u32 *b) {
    int i = B_0153F850__.fb8 - 1;
    if (i < 0) {
        i = B_0153F850__.fb4 - 1;
    }
    if (a) {
        *a = ((u32 *)((u8 *)&B_0153F850__ + 0xd0))[i + 1];
    }
    if (b) {
        *b = B_0153F850__.fc4;
    }
}
