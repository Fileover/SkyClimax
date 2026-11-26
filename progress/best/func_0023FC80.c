extern u32 D_004CC330;
void func_0023C8D0(void *);

typedef struct Elem {
    struct ElemVtbl *vt;
    u8 pad[0x90];
} Elem;

typedef struct ElemVtbl {
    void (*dtor)(Elem *);
} ElemVtbl;

void func_0023FC80(void *p) {
    Elem *end = (Elem *)((char *)p + 0x4c4);
    Elem *beg = (Elem *)((char *)p + 0x24);
    *(u32 *)p = (u32)&D_004CC330;
    while (end != beg) {
        end = (Elem *)((char *)end - 0x94);
        end->vt->dtor(end);
    }
    func_0023C8D0(p);
}
