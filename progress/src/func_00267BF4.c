typedef struct { u32 a, b, c, d; } S;
extern S B_016DAD74[];
void func_00267BF4(u32 a, u32 b, u32 c, u32 d) {
    S *p = B_016DAD74;
    p->d = d;
    p->a = a;
    p->b = b;
    p->c = c;
}
