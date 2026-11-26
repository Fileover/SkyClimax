typedef struct { unsigned char pad[0x10]; unsigned int f; } S;
void func_00021808(unsigned int s, unsigned int v) { if (s) ((S *)s)->f &= ~v; }
