extern u8 D_015CE0B0[];
volatile int sink;
void func_001E96DC(void *a0, void *a1, void *a2) { sink = (int)(long)a0; sink = (int)(long)a1; sink = (int)(long)a2; }
void func_001E9B50(void *a0, void *a1) { func_001E96DC((void *)&D_015CE0B0, a0, a1); }
