/* identical to func_00267BF4 (matched), with its names changed by decompdecomp */
typedef struct { u32 a, b, c, d; } S;
extern S B_016DB320[];
void func_00279690(u32 a, u32 b, u32 c, u32 d) {
    S *p = B_016DB320;
    p->d = d;
    p->a = a;
    p->b = b;
    p->c = c;
}
