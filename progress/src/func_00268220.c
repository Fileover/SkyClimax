/* identical to func_00267BF4 (matched), with its names changed by decompdecomp */
typedef struct { u32 a, b, c, d; } S;
extern S B_016DADA8[];
void func_00268220(u32 a, u32 b, u32 c, u32 d) {
    S *p = B_016DADA8;
    p->d = d;
    p->a = a;
    p->b = b;
    p->c = c;
}
