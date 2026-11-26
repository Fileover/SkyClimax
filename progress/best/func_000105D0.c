extern void func_0030492C(void *, void *) __attribute__((weak));
extern u32 D_00380E00;
extern u32 B_00571B98;
extern u32 D_004C02EC;
typedef void (*FuncPtr)(void *);
extern FuncPtr D_004E50D4;

void func_000105D0(void) {
    if (func_0030492C) {
        func_0030492C(&D_00380E00, &B_00571B98);
    }
    if (D_004C02EC != 0) {
        if (D_004E50D4 != NULL) {
            D_004E50D4(&D_004C02EC);
        }
    }
}
