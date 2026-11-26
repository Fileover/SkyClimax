typedef struct {
    u64 a, b, c;
} Struct24;

typedef struct {
    u32 a;
    u32 b;
    u16 c;
    u16 d;
} Part1;

typedef struct {
    u32 a;
    u16 b;
    u16 c;
} Part2;

typedef struct {
    u32 id;
    Part1 p1;
    Part2 p2;
} TargetStruct;

extern u32 D_003D2D08;
extern Part1 B_016E9B40;
extern Part2 B_017020EC;

TargetStruct *func_00329AC8(u64 arg0, int arg1, Struct24 s) {
    TargetStruct *dst = (TargetStruct *)(u64)(u32)arg0;
    dst->id = D_003D2D08;
    dst->p1 = B_016E9B40;
    dst->p2 = B_017020EC;
    return dst;
}
