typedef struct {
    float x;
    float y;
} Vec2;

extern Vec2 *B_0149A5F4;

volatile int stub;
__attribute__((noinline)) void func_00143E30(float x, float y) {
    stub = 1;
}

void func_00144024(float x, float y) {
    func_00143E30(x + B_0149A5F4->x, y + B_0149A5F4->y);
}
