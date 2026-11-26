volatile int sink;
void func_001C1A68(void *a0, void *a1) { sink = (int)(long)a0; sink = (int)(long)a1; }
void func_001C1D90(void *a0) { func_001C1A68(a0, (void *)1); }
