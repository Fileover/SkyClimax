volatile int sink;
void func_001C1D98(void *a0, void *a1) { sink = (int)(long)a0; sink = (int)(long)a1; }
void func_001C1F78(void *a0) { func_001C1D98(a0, (void *)3); }
