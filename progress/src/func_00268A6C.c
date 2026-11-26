/* identical to func_00267BF4 (matched), with its names changed by decompdecomp */
typedef struct { u32 a, b, c, d; } S;
extern S B_016DADB8[];
void func_00268A6C(u32 a, u32 b, u32 c, u32 d) {
    S *p = B_016DADB8;
    p->d = d;
    p->a = a;
    p->b = b;
    p->c = c;
}
