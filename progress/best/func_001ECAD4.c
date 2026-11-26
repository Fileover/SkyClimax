typedef struct {
    u8 pad1[0x8e842];
    u8 b1;
    u8 b2;
    u8 pad2[0x20];
    u32 flags;
} Struct_B_0153F850;

extern Struct_B_0153F850 B_0153F850;
extern float B_015CE138[4];

void func_001ECAD4(u32 r3, float *r4) {
    Struct_B_0153F850 *r10 = &B_0153F850;
    r3 -= 0xb61;
    r10->flags |= 0x80;
    if (r3 <= 5) {
        if (r3 == 5) {
            B_015CE138[0] = r4[0];
            B_015CE138[1] = r4[1];
            B_015CE138[2] = r4[2];
            B_015CE138[3] = r4[3];
        }
    }
    r10->b1 = 1;
    r10->b2 = 1;
}
