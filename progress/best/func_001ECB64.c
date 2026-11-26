extern float D_004EAFAC;
extern float D_004EAFB0;

void func_001ECB64(int a, void *r4, int c, int d, int e, int f, int g, char *r10) {
    char *r9 = r10 + 0x90000;
    *(float *)(r9 - 0x16f8) = (float)*(int *)r4;
    *(int *)(r9 - 0x16f4) = *(int *)r4;
}
