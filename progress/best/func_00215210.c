extern u8 D_016DA230[];
volatile int sink;
void func_002151D4(void *a0, void *a1, void *a2, void *a3, void *a4, void *a5, void *a6) { sink = (int)(long)a0; sink = (int)(long)a1; sink = (int)(long)a2; sink = (int)(long)a3; sink = (int)(long)a4; sink = (int)(long)a5; sink = (int)(long)a6; }
void func_00215210(void *a0, void *a1, void *a2, void *a3, void *a4, void *a5) { func_002151D4((void *)&D_016DA230, (char *)(void *)&D_016DA230 + 4, a0, a1, a2, a5, a0); }
