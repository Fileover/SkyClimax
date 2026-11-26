/* identical to func_001CF52C (matched), with its names changed by decompdecomp */
void func_002C1DB4(void *);

typedef struct {
    void *ptr;
    u8 flag;
} Obj;

void func_001CF574(Obj *this) {
    if (this->flag) {
        func_002C1DB4(this->ptr);
        this->flag = 0;
    }
}
