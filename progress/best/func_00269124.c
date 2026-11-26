extern u8 D_016DADB8[];
volatile int sink;
void func_002690A0(void *a0, void *a1) { sink = (int)(long)a0; sink = (int)(long)a1; }
void func_00269124(void *a0) { func_002690A0((void *)0, (char *)(void *)&D_016DADB8 + 0x164); }
