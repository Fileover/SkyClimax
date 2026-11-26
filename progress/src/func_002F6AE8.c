extern u8 D_0046CE08[];
volatile int sink;
void func_002F6A14(void *a0, void *a1, void *a2, void *a3, void *a4) { sink = (int)(long)a0; sink = (int)(long)a1; sink = (int)(long)a2; sink = (int)(long)a3; sink = (int)(long)a4; }
void func_002F6AE8(void *a0, void *a1, void *a2) { func_002F6A14(a0, a1, a2, (void *)&D_0046CE08, (void *)0x10); }
