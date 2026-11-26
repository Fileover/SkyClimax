extern u32 B_0115C8E0[];
extern const char STR_003E5AE0[];

void *func_000FD5A0(u32);
char *func_000FEC1C(void);
void func_0006BB84(const char *, ...);

volatile int dummy;
static void __attribute__((noinline)) func_000F6AFC(u32 id, void *obj) {
    dummy = id;
}

void func_000F6E48(u32 id) {
    if (id != (u32)-1) {
        void *obj = func_000FD5A0(id);
        if (!obj) {
            func_0006BB84(STR_003E5AE0, id, func_000FEC1C());
            B_0115C8E0[3] = 0;
            B_0115C8E0[1] = 0;
            return;
        }
        func_000F6AFC(id, obj);
    }
    B_0115C8E0[3] = 0;
    B_0115C8E0[1] = 0;
}
