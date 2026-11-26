typedef struct {
    u32 pad0;
    s32 field_4;
    u32 field_8;
    s32 field_c;
} Obj;

extern s32 func_002836CC(u32, s32, u32, s32, s32);

s32 func_0026E9C0(Obj *p, u32 b, s32 c) {
    if (p) {
        return func_002836CC(b, c, p->field_8, p->field_c, p->field_4);
    }
    return func_002836CC(0, 0, 0, 0, 0);
}
