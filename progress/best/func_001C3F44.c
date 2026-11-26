extern void *D_004CADB8[];
extern void *D_004CAE08[];
void sys_memory_free(void *);

typedef struct S {
    void *vtable;
    char pad[0x24];
    void *ptr;
} S;

void func_001C3F44(S *s) {
    s->vtable = D_004CADB8;
    sys_memory_free(s->ptr);
    s->vtable = D_004CAE08;
    s->ptr = 0;
}
