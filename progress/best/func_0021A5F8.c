typedef struct {
    char pad[0x18];
    int unk18;
} S;

volatile int stub;
__attribute__((noinline)) void func_0021A588(S *s) {
    stub = (int)(long)s;
}

void func_0021A5F8(S *s) {
    if (s->unk18 == 0) {
        func_0021A588(s);
    }
}
