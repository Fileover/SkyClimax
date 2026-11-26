typedef struct {
    u8  b0[4];
    u8  f4;
    u8  b5[0xf];
    u32 f14;
    u32 f18;
    u8  b1c[0xc];
} Local;

extern void func_0033AA40(u64, u64);
extern void func_0030A0C8(u64, u64, u64);

void *func_001D322C(void *a, void *out) {
    Local local;
    local.f4 = 0;
    local.f14 = 0;
    local.f18 = 0xf;
    func_0033AA40((u64)a, (u64)&local);
    *(u64 *)out = 0;
    func_0030A0C8((u64)&local, 1, 0);
    return a;
}
