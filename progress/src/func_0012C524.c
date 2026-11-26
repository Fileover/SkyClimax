typedef struct {
    int pad;
    int min_x; // 4
    int min_y; // 8
    int max_x; // 0xc
    int max_y; // 0x10
} S;

void func_0012C524(S *s) {
    s->min_y = 0;
    s->max_y = -1;
    s->min_x = 0;
    s->max_x = -1;
}
