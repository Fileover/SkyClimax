typedef struct { vu32 v; } S;
extern S B_016DA4F4[];

void func_0021F3A0(void) {
    u32 x = B_016DA4F4[0].v - 1;
    B_016DA4F4[0].v = x;
    B_016DA4F4[0].v;
}
