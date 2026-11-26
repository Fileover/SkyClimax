extern u8 D_015CE0B0[];
volatile int sink;
void func_001E8968(void *a0, void *a1, void *a2, void *a3) { sink = (int)(long)a0; sink = (int)(long)a1; sink = (int)(long)a2; sink = (int)(long)a3; }
void func_001E8C40(void *a0, void *a1, void *a2) { func_001E8968((void *)&D_015CE0B0, a1, a2, (void *)1); }
