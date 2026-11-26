typedef struct {
    char pad[8];
    void *mutex;
} Foo;

void func_0020CDE0(void *);

void func_002F8B44(Foo *self) {
    if (self->mutex != NULL) {
        func_0020CDE0(self->mutex);
        self->mutex = NULL;
    }
}
