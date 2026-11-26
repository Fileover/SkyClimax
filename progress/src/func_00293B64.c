/* identical to func_00293B00 (matched), with its names changed by decompdecomp */
typedef struct {
    int pad[3];
    int state;
    int pad10;
    int flag;
    int a;
    int b;
    int c;
    int d;
} Struct_00293B00;

int func_00293B64(Struct_00293B00 *s, int a, int b, int c, int d) {
    if (s->state != 0) {
        return 0;
    }
    s->flag = 1;
    s->a = a;
    s->b = b;
    s->c = c;
    s->d = d;
    return 1;
}
