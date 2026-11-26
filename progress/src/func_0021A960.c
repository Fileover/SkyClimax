void func_00224F84(u32);
void func_0021EC98(u32);
void func_0020CDE0(u32);

typedef struct {
    u32 pad0;
    u32 f4;
    u32 f8;
    u32 fc;
} Struct21A960;

void func_0021A960(Struct21A960 *s) {
    switch (s->fc) {
    case 0: break;
    default:
        func_00224F84(s->fc);
        s->fc = 0;
        break;
    }
    switch (s->f8) {
    case 0: break;
    default:
        func_0021EC98(s->f8);
        s->f8 = 0;
        break;
    }
    switch (s->f4) {
    case 0: break;
    default:
        func_0020CDE0(s->f4);
        s->f4 = 0;
        break;
    }
}
