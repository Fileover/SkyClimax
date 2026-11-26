/* identical to func_002EC75C (matched), with its names changed by decompdecomp */
volatile int stub;
__attribute__((noinline)) void func_002EC398(void *ctx) { stub = (int)(long)ctx; }
__attribute__((noinline)) void func_002EC67C(void *ctx, u32 data, u8 flag) { stub = (int)(long)ctx + data + flag; }
__attribute__((noinline)) void func_002EC59C(void *ctx) { stub = (int)(long)ctx; }

void func_002EC7B4(void *ctx, u32 data, u8 flag) {
    func_002EC398(ctx);
    func_002EC67C(ctx, data, flag);
    func_002EC59C(ctx);
}
