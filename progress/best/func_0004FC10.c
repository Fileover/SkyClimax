typedef struct {
    char pad[0x278];
    float unk278;
} Struct_0004FC10;

float func_0014FB04(float, float);

void func_0004FC10(Struct_0004FC10 *arg0) {
    arg0->unk278 = func_0014FB04(-1.0f, 1.0f) * 5.0f;
}
