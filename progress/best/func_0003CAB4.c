extern void *func_001B84D8();
extern void *B_0060028C;

void func_0003CAB4(float v) {
    char *p = (char *)func_001B84D8(B_0060028C);
    if (p) {
        *(float *)(p + 0x15e0) = v;
    }
}
