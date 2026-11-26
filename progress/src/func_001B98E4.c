volatile int sink;
void func_001B94C0(void *a0, void *a1, void *a2, void *a3) { sink = (int)(long)a0; sink = (int)(long)a1; sink = (int)(long)a2; sink = (int)(long)a3; }
void func_001B98E4(void *a0, void *a1, void *a2) { func_001B94C0(a0, a0, a1, a2); }
