__attribute__((noreturn)) void func_0004FD94(void);
typedef struct { u8 pad[0x68]; u32 f; } S;
void func_0004FE50(S *s) { if (s->f & 0x400) return; func_0004FD94(); }
