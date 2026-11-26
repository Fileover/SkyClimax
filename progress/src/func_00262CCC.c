volatile int sink;
void func_00262C94(void *a0, void *a1) { sink = (int)(long)a0; sink = (int)(long)a1; }
void func_00262CCC(void *a0) { func_00262C94(a0, *(void **)((char *)a0 + 0x10)); }
