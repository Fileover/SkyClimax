/* identical to func_0021A960 (matched), with its names changed by decompdecomp */
void func_002FAFD4(u32);
void func_002FAFD4(u32);
void func_002FAFD4(u32);

typedef struct {
    u32 pad0;
    u32 f4;
    u32 f8;
    u32 fc;
} Struct21A960;

void func_002261DC(Struct21A960 *s) {
    switch (s->fc) {
    case 0: break;
    default:
        func_002FAFD4(s->fc);
        s->fc = 0;
        break;
    }
    switch (s->f8) {
    case 0: break;
    default:
        func_002FAFD4(s->f8);
        s->f8 = 0;
        break;
    }
    switch (s->f4) {
    case 0: break;
    default:
        func_002FAFD4(s->f4);
        s->f4 = 0;
        break;
    }
}
