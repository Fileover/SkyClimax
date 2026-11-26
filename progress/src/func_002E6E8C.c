/* identical to func_002E6E1C (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_002E6888(void *p) { stub = (int)(long)p; }

void func_002EB3B8(void *);
void func_002EADC8(void *);
void func_002DA6E8(void *);

extern void *D_004CD948[];

void func_002E6E8C(void *this) {
    *(void **)this = D_004CD948;
    func_002E6888(this);
    func_002EB3B8((char *)this + 0xd0);
    func_002EADC8((char *)this + 0x98);
    func_002DA6E8(this);
}
