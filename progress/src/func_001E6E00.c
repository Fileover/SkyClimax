extern u8 D_015CE0B0[];
volatile int sink;
void func_001E657C(void *a0, void *a1, void *a2) { sink = (int)(long)a0; sink = (int)(long)a1; sink = (int)(long)a2; }
void func_001E6E00(void *a0) { func_001E657C((void *)&D_015CE0B0, a0, (void *)1); }
