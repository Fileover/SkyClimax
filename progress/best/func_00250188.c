typedef struct {
    char pad[0x20];
    int field_20;
    char pad2[8];
    u32 field_2c;
    int field_30;
} Obj;

void func_00248C90(u32);

void func_00250188(Obj *p) {
    int v = p->field_20;
    if (v == 0) {
        return;
    }
    if (v == 3) {
        p->field_20 = 0;
        return;
    }
    if (p->field_2c) {
        func_00248C90(p->field_2c);
    }
    p->field_30 = 1;
}
