volatile int sink;
void func_002F704C(void *a0, void *a1, void *a2) { sink = (int)(long)a0; sink = (int)(long)a1; sink = (int)(long)a2; }
void func_002F7150(void *a0, void *a1) { func_002F704C(a0, (void *)1, a1); }
