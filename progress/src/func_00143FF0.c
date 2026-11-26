typedef struct {
    float x;
    float y;
    float pad0[4];
    float scale_x;
    float scale_y;
    float pad1[4];
    float mul_x;
    float mul_y;
} Data;

extern Data *B_0149A5F4;

volatile int stub;
__attribute__((noinline)) void func_00143E30(float x, float y) {
    stub = 1;
}

void func_00143FF0(float x, float y) {
    Data *d = B_0149A5F4;
    func_00143E30(d->mul_x * d->scale_x * x + d->x, d->mul_y * d->scale_y * y + d->y);
}
