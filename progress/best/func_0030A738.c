extern u8 D_004C9960[];
extern u8 D_004C9978[];
void func_00154560(void *);
void func_002B3FB4(void *);

typedef struct {
    u32 proxy;
    void *ptr;
    u8 dummy[12];
    u32 size;
    u32 capacity;
} StdString;

typedef struct {
    volatile u32 vptr;
    StdString str;
} Obj;

void func_0030A738(Obj *self) {
    StdString *s = &self->str;
    self->vptr = (u32)&D_004C9960;
    self->vptr = (u32)&D_004C9978;
    if (s->capacity > 15) {
        func_00154560(s->ptr);
    }
    s->capacity = 15;
    *(u8 *)&s->ptr = 0;
    s->size = 0;
    func_002B3FB4(self);
}
