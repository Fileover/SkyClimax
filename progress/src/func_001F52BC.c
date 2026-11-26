extern u8 D_015D47D0[];
volatile int sink;
void func_001F4D80(void *a0, void *a1, void *a2) { sink = (int)(long)a0; sink = (int)(long)a1; sink = (int)(long)a2; }
void func_001F52BC(void *a0, void *a1) { func_001F4D80((void *)&D_015D47D0, a0, a1); }
