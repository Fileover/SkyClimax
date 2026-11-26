typedef struct { char pad[0x24]; float f; } S;
void func_000917E0(S *s, int a, int p) {
    if (p) s->f = *(float *)p;
}
